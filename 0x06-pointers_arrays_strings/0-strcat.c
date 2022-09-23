#include "main.h"

/**
 *	*_strcat - concatenates @src to @dest
 *	@src: the source string to append to @dest
 *	@dest: the destination strinf to be concatenated upon
 *	Return: pointer to the resulting string
*/

char *_strcat(char *dest, char *src)
{
	int dest_len;
	chat *temp;

	dest_len = strlen(dest);
	temp = dest;
	temp += dest_len;

	while (*src != '\0')
	{
		*temp = *src;
		++temp;
		++src;
	}
	*temp = '\0';

	return (dest);
}
