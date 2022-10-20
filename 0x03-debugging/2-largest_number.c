#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: first integer
 * @b: second integer
 * @c: third intiger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = b;
		else
			largest = c;
	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}

	return (largest);
}
