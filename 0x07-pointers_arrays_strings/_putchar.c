#include <unistd.h>
<<<<<<< HEAD

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
=======
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
>>>>>>> 5883b946cc41890249ef5c166ae22628c5283f07
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
