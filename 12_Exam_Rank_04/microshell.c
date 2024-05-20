#include "microshell.h"

void	error_message(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	cd(char **argv, int i)
{
	if (i != 2)
	{
		error_message("error: cd: bad arguments\n");
		return (1);
	}
	else if (chdir(argv[1]) == -1)
	{
		error_message("error: cd: cannot change directory to ");
		error_message(argv[1]);
		error_message("\n");
		return (1);
	}
	return (0);
}

int	exec(char **argv, char **env, int i)
{
	int		fd[2];
	int		status;
	int		pid;
	bool	has_pipe;

	if (argv[i] && strcmp(argv[i], "|") == 0)
		has_pipe = true;
	else
		has_pipe = false;

	if (has_pipe == true && (pipe(fd) == -1))
	{
		error_message("error: fatal\n");
		return (1);
	}

	pid = fork();

	if (pid == 0)
	{
		argv[i] = 0;
		if (has_pipe == true
			&& (dup2(fd[1], 1) == -1
			|| close(fd[0]) == -1
			|| close(fd[1]) == -1))
		{
			error_message("error: fatal\n");
			return (1);
		}

		execve(*argv, argv, env);

		{
			error_message("error: cannot execute ");
			error_message(*argv);
			error_message("\n");
			return (1);
		}
	}

	waitpid(pid, &status, 0);

	if (has_pipe == true
		&& (dup2(fd[0], 0) == -1
		|| close(fd[0]) == -1
		|| close(fd[1]) == -1))
	{
		error_message("error: fatal\n");
		return (1);
	}
	return WIFEXITED(status) && WEXITSTATUS(status);
}

int	main(int argc, char **argv, char **env)
{
	int	i = 0;
	int	status = 0;

	if (argc > 1)
	{
		while (argv[i] && argv[++i])
		{
			argv += i;
			i = 0;
			while (argv[i]
				&& strcmp(argv[i], "|") != 0
				&& strcmp(argv[i], ";") != 0)
				i++;
			if (strcmp(*argv, "cd") == 0)
				status = cd(argv, i);
			else if (i)
				status = exec(argv, env, i);
		}
	}
	return (status);
}
