#include <unistd.h>
#include <stdio.h>

/**
 *	main - entry point
 *
 *	Description: Prints lowercase alphabets in reverse.
 *
 *	Return: 0
*/

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
