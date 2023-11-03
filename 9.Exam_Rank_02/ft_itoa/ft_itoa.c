#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

char *ft_itoa(int nbr)
{
 char *str = NULL;
 int len = 0; 
 int nbr_copy = nbr;

 if (nbr == -2147483648)
  return ("-214783648\0");
 if (nbr == 0)
   return ("0\0");
 if (nbr <= 0)
 {
  len++; 
  nbr_copy = -nbr;
 }
 while (nbr_copy)
 {
   nbr_copy /= 10; 
   len++;
 }
 str = (char *) malloc(sizeof(char) * len + 1);
 if (!str)
  return (NULL); 
 str[len] = '\0';
 if (nbr < 0)
 {
  str[0] = '-';
  nbr = -nbr;
 }
 while (nbr)
 {
  str[--len] = nbr % 10 + 48;
  nbr /= 10;
 }
 return (str);
}

int main(void)
{
// printf("%d\n", INT_MAX);
 printf("ciao: %s\n", ft_itoa(2345));
 printf("1.%s\n", ft_itoa(-48834)); 
 printf("2.%s\n", ft_itoa(-2345));
 printf("3.%s\n", ft_itoa(0));
 printf("4.%s\n", ft_itoa(89320));
return (0);
}
