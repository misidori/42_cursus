#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *) &s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s, char *b)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s)
	{
		s = (char *) malloc(sizeof(char));
		s[0] = '\0';
	}
	if (!s || !b)
		return (NULL);
	new_str = (char *) malloc(sizeof(char) * (ft_strlen(s) + ft_strlen(b)) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	if (s)
	{
		while (s[i] != '\0')
		{
			new_str[i] = s[i];
			i++;
		}
	}
	j = 0;
	while (b[j] != '\0')
	{
		new_str[i++] = b[j++];
	}
	new_str[ft_strlen(s) + ft_strlen(b)] = '\0';
	free(s);
	return (new_str);
}

char	*ft_read_file(int fd, char *stash)
{
	char	*buffer;
	int		ret_read;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	ret_read = 1;
	while (!ft_strchr(stash, '\n') && ret_read != 0)
	{
		ret_read = read(fd, buffer, BUFFER_SIZE);
		if (ret_read == -1)
		{
			free (buffer);
			return (NULL);
		}
		buffer[ret_read] = '\0';
		stash = ft_strjoin(stash, buffer);
	}
	free(buffer);
	return (stash);
}

char	*ft_get_line(char *stash)
{
	char	*line;
	int		i;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		line[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		line[i] = stash[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_reduce_stash(char *stash)
{
	char	*reduced_stash;
	int		i;
	int		j;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
	{
		free(stash);
		return (NULL);
	}
	reduced_stash = malloc(sizeof(char) * (ft_strlen(stash) - i + 1));
	if (!reduced_stash)
		return (NULL);
	i++;
	j = 0;
	while (stash[i])
	{
		reduced_stash[j] = stash[i];
		j++;
		i++;
	}
	reduced_stash[j] = '\0';
	free(stash);
	return (reduced_stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = ft_read_file(fd, stash);
	if (!stash)
		return (NULL);
	line = ft_get_line(stash);
	stash = ft_reduce_stash(stash);
	return (line);
}
