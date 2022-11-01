#include "main.h"

/**
<<<<<<< HEAD
 * _memset - Fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes of memory area to fill
 * Description: Fill the first `n` bytes of the memory area pointed to by `s`
 * with the constant byte `b`
 * Return: Pointer to memory area `s`
=======
 * _memset - ironnou
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
>>>>>>> 5883b946cc41890249ef5c166ae22628c5283f07
 */

char *_memset(char *s, char b, unsigned int n)
{
<<<<<<< HEAD
		unsigned int count = 0;

			while (count < n)
			{
								s[count] = b;
								count++;
			}

				return (s);
=======
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
>>>>>>> 5883b946cc41890249ef5c166ae22628c5283f07
}
