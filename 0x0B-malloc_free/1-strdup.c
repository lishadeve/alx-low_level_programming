#include <stdlib.h>
#include "main.h"

/**
 *	*_strdup - returns a pointer to a newly allocated space in memory.
 *	@str: string to copy
 *
 *	Return: a pointer to the duplicated string.
 *		NULL if insufficient memory was available
*/

char *_strdup(char *str)
{
	char *s;
	int i, j, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	s = (char *)malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
		s[j] = str[j];

	return (s);
}
