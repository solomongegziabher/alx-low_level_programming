#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers from input to 98
 * @num: The starting number
 */

void print_to_98(int num)
{
	if (num >= 98)
	{
		while (num > 98)
			printf("%d, ", num--);
		printf("%d\n", num);
	}
	else
	{
		while (num < 98)
			printf("%d, ", num++)
				printf("%d\n", num);
	}
}
