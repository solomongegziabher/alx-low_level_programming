#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if the number is positive,negative or 0
<<<<<<< HEAD
 * Return: Always 0
=======
 * Return; Always 0
>>>>>>> 32b2870eefcce7b2fe73c63a6e3d2093b577d3e9
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		prinf("%d is negative\n", n);
	}

	return (0);
}
