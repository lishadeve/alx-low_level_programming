#include <stdlib.h>
#include "main.h"

/**
 *	str_concat - concatenates two strings.
 *	@s1: first string
 *	@s2: second string
 *
 *	Return: NULL on failure/pointer(concatanated string)
*/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, len;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len++;
	for (i = 0; s2[i] != '\0'; i++)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	j = 0;
	i = 0;
	while (*(s1 + j) != '\0')
	{
		str[i] = *(s1 + j);
		j++;
		i++;
	}
	j = 0;
	while (*(s2 + j) != '\0')
	{
		str[i] = *(s2 + j);
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
