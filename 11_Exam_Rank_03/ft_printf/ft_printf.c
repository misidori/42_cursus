#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str, int *len)
{
	int	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		(*len)++;
	}
}

void	ft_putnbr(long long int num, int base, int *len)
{
	char	*hex = "0123456789abcdef";

	if (num < 0)
	{
		num = num * -1;
		write(1, "-", 1);
		(*len)++;
	}
	if (num >= base)
		ft_putnbr((num / base), base, len);
	write(1, &hex[num % base], 1);
	(*len)++;
}

int	ft_printf(const char *format, ... )
{
	va_list	pointer;
	int		len = 0;
	int		i = 0;

	va_start(pointer, format);
	while (format[i])
	{
		if (format[i] == '%'
			&& (format[i + 1] == 's'
			|| format[i + 1] == 'd'
			|| format[i + 1] == 'x'))
		{
			i++;
			if (format[i] == 's')
				ft_putstr((char *) va_arg(pointer, char *), &len);
			else if (format[i] == 'd')
				ft_putnbr((long long int) va_arg(pointer, int), 10, &len);
			else if (format[i] == 'x')
				ft_putnbr((long long int) va_arg(pointer, unsigned int), 16, &len);
		}
		else
		{
			write(1, &format[i], 1);
			len++;
		}
		i++;
	}
	va_end(pointer);
	return (len);
}
