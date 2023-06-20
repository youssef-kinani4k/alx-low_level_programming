#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long u = 0, u1 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = u + u1;
		printf("%lu", sum);

		u = u1;
		u1 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
