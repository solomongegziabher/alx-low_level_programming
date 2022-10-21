#include "main.h"

/**
 * print_numbers - prints numbers exept 2 and 4
 * Return: returns nothing
 */
void print_numbers(void)
{
	int number;
	for (number = 48; number < 58; number++)
	{
		if ((number == 50) || (number == 52))
		{
			continue;
		}
		_putchar(number);
	}
	_putchar(10);
}
