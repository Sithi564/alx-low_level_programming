#include <stdio.h>

/**
 * sign - prints the last digit of a number
 * Returns the value of the last digit
 */

int print_last_digit(int);

int main(void)
{
    int r;
	char s = '\n';

	putchar(print_last_digit(67676767));
	putchar(s);
}
6
int print_last_digit(int c)
{
	c % 10;

}
