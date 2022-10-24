#include "main.h"

/**
<<<<<<< HEAD
 * largest_number - returns the largest number
 * @a: first integer
 * @b: second integer
 * @c: third intiger
=======
 * largest_number - returns the largestof 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
>>>>>>> 7f8066ea5aab1a55a3fdac914fe3b15367800912
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
<<<<<<< HEAD
	int largest;

	if (a > b)
	{
		if (b > c)
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
=======
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
>>>>>>> 7f8066ea5aab1a55a3fdac914fe3b15367800912
}
