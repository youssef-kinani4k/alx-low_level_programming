#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long int u, u1, cha, sum;

	u = 1;
	u1 = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (u < 4000000 && (u % 2) == 0)
		{
			sum = sum + u;
		}
		cha = u + u1;
		u = u1;
		u1 = cha;
	}

	printf("%lu\n", sum);

	return (0);
}

