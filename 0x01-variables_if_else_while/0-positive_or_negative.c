#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
 * main prints if the number is positive,negative or 0
 * Return; Always 0
=======
 * main - Entry point
 * Description: prints if a number is positive, zero or negative.
 * Return; 0
>>>>>>> c5270a1e850f2d93906909829ba30bb29de6075a
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n". n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n". n);
	}
	else
	{
		prinf("%d is negative\n". n);
	}

	return (0);
}
