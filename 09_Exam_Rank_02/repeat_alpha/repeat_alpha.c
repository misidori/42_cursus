#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
 if (argc != 2)
 {
  write(1, "\n", 1);
  return (0);
 }
 
 int i = 1;
 int j;

 while (argv[i])
 {
  j = 0;
  while (argv[i][j])
  {
   int n = argv[i][j];
   if (argv[i][j] >= 65 && argv[i][j] <=90)
   {
    while(n >= 65)
    {
      write(1, &argv[i][j], 1);
      n--; 
    } 
   }
   else if (argv[i][j] >= 97 && argv[i][j] <= 122)
   {
    while (n >= 97)
    {
     write(1, &argv[i][j], 1);
     n--;
    }
   }
   else
    write(1, &argv[i][j], 1);
   j++;
  }
  i++;  
 }
 write(1, "\n", 1);
 return (0);
}
