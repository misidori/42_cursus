#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int number = atoi(argv[1]);
		int i = 2;
		if (number == 1)
		printf("1");
		while (number >= 2)
		{
			if (number % i == 0)
			{
				printf("%d", i);
				if (number == i)
					break ;
				printf("*");
				number /= i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}
