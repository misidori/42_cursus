#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
	i++;
	return (i);
}

static void	ft_print_positive_number(int n, int fd)
{
	int		i;
	int		j;
	int		n_value;
	int		n_length;
	char	str[10];

	i = 0;
	n_value = n;
	n_length = 0;
	while (n_value != 0)
	{
		j = 0;
		j = n_value % 10;
		n_value = n_value / 10;
		n_length++;
		str[i] = j + '0';
		i++;
	}
	i = 0;
	while (i < n_length)
	{
		write(fd, &str[n_length -1 - i], 1);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n >= -2147483647 && n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
		ft_print_positive_number(n, fd);
	}
	else if (n > 0 && n <= 2147483647)
		ft_print_positive_number(n, fd);
	else
		write(fd, "0", 1);
}
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	int len = ft_strlen(argv[1]);
	int i = 0;
	int j = 0;
	
	while ((argv[1][len-1] == ' ' || argv[1][len-1] == '\t') && ((len-1) >= 0))
		len--;
	while (argv[1][len-1] >= 33 && argv[1][len-1] <= 126 && ((len-1) >= 0))
	{
		len--;
		i++;
	}
	while (j < i)
	{
		write(1, &argv[1][len], 1);
		len++;
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
