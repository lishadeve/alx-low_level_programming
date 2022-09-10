#include <stdio.h>
#include <stdlib.h>

/**
 *	main - entry point
 *
 *	Description: Prints lowercase alphabets.
 *
 *	Return: 0
*/

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');

	return (0);
}
