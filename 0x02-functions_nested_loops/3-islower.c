#include "main.h"

/**
 * 	_islower - entry point
 * 	Description: Checks for lowercase character.
 * 	Return: 1 if true, else 0.
*/

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		return (0);
	}
}
