#include "main.h"

/**
 * swap_int - swaps two integers passed to it
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int a_b;
	int b_a;
	a_b = *a;
	b_a = *b;
	*a = b_a;
	*b = a_b;
}
