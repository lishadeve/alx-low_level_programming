#include "main.h"

/**
 *	*_strcat - concatenates @src to @dest
 *	@src: the source string to append to @dest
 *	@dest: the destination strinf to be concatenated upon
 *	Return: pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';
	return (dest);
}
