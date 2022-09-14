#include "main.h"

/**
 * 	_islower - entry point
 * 	@c: the integer value it receives
 * 	Description: Checks for lowercase character.
 * 	Return: 1 if true. 0 if false.
*/

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer int c */
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
