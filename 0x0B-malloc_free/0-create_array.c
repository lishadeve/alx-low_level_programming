#include "main.h"
#include <stdlib.h>

/**
 *	*create_array - creates an array of chars,
 *	and initializes it with a specific char
 *	@size: array size
 *	@c: initialization char
 *
 *	Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
