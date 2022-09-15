#include <stdio>

/**
 *	main - prime numbers
 *	Returns: 0
*/

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long larg_prim = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			large_prim = divisor;
		}
		dovisor += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}
