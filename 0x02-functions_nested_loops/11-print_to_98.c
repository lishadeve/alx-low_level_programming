#include "main.h"

/**
 * 	print_to_98
 * 	#n: Starting integer
 * 	Description: Prints all natural number from n- 98.
 * 	Return: void
*/

void print_to_98(9int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}