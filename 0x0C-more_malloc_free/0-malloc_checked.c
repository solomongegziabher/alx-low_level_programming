#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory to be allocated.
 * Return: pointer to allocated memory.
 */

void *malloc_checked(unsigned int b)
{
<<<<<<< HEAD
	void *p;
       
	p = malloc(b);
=======
	void *p = malloc(b);
	
>>>>>>> 53c01a6b740b78550f7d08b3417cfeb0472da39f
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
