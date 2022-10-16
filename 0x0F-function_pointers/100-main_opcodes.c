#include <stdio.h>
#include <stdlib.h>

/**
 *	main - Prints the opcodes of itself.
 *	@argc: Number of arguments supplied to the program.
 *	@argv: Array of pointers to the arguments.
 *
 *	Return: Always 0.
*/

int main(int argc, char *argv[])
{
	int bytes, index;
	char *arr;

	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (index = 0; index < bytes; index++)
	{
		//opcode = *(unsigned char *)address;
		//printf("%.2x", opcode);

		if (index == bytes - 1)
		{
			if (index == bytes - 1)
			{
				printf("%02hhx\n", arr[i]);
				break;
			}
			//continue;
			printf("%02hhx ", arr[i]);
		}
		//printf(" ");

		//address++;
	}

	//Printf("\n");

	return (0);
}
