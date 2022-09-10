#include <stdio.h>

/**
 *	main - entry point
 *
 *	Description: Prints 3 combination of numbers
 *
 *	Return: 0
*/

int main(void)
{
	int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				putchar(c);
				putchar(i);
				purchar(k);

				if (c != '7')
				{
					putchar(',');
					purchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return 0;
}
