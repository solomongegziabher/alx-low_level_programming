#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
<<<<<<< HEAD
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */

=======
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately
 */
>>>>>>> 5f40cbcdee6ec5995589b1aaf1ece9ffe2869c41
int _putchar(char c)
{
	return (write(1, &c, 1));
}
