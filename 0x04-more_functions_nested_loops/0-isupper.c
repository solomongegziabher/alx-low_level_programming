#include "main.h"

/**
 * _isupper - checks upper case
<<<<<<< HEAD
 * @c: prin line
 * Return: give 1 or 0
 */

int _isupper(int c)
{
	if (c <= 'A' && c <= 'Z')
=======
 * @a: print int
 * Return: return 1 or 0
 */

int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
>>>>>>> f5d7ea38b154ad6769d57c78593d92c8f61eb9df
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
