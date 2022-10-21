#include "main.h"

/**
 * largest_number - returns the largestof 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

<<<<<<< HEAD
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
=======
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
>>>>>>> f5d7ea38b154ad6769d57c78593d92c8f61eb9df

return (largest);
}
