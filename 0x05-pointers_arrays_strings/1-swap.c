#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @param a: swaps value with b
 * @param b: swaps value with a
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
