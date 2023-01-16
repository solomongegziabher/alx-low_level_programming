#include "main.h"

/**
 * _isdigit - function that verifies if a  character is a digit or not
 * @c: tested character
 * @c: tested character
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
