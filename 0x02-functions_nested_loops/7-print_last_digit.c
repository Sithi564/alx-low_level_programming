#include <stdio.h>

/**
 * print_last_digit - print last digit of a number
 * n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n);

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}

int print_last_digit(int n)
{
	return (n % 10);
}
