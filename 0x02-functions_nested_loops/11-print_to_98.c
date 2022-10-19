#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 * n: integer argument
 * Return: all numbers before 98
 */

void print_to_98(int n);

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
