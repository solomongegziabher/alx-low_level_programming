#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
<<<<<<< HEAD
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c && B > a)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}

	return (largest);
=======
int largest;

if (a > b)
{
if (a > c)
{
largest = a;
}
else
{
largest = c;
}
}
else if (b > c)
{
largest = b;
}
else
{
largest = c;
}
return (largest);
>>>>>>> 5883b946cc41890249ef5c166ae22628c5283f07
}
