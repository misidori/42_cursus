#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
 int result = 0;
 int i = 0;

 while (str[i])
 {
	result = result * 10 + str[i] - 48;
	i++;
 }
 return (result);
}

int ft_putnbr(int num)
{
 char digit;

 if (num >= 10)
	ft_putnbr(num / 10);
 digit = num % 10 + 48;
 write(1, &digit, 1);
}

int main(void)
{
 char ciao[3] = "20\0";


 write(1, ciao, 3);
 write(1, "\n", 1);
 ft_putnbr(ft_atoi(ciao) + 5);
 write(1, "\n", 1);
 return (0);
}
