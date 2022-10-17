#include <stdio.h>
/**
 *main - Entry point
 *Return: 0
 */
int main(void)
{
	int n = '0';
	int letters = 'a';

	while (n <= '9') /*print 0-9*/
	{
		putchar(n);
		n++;
	}
	while (letters <= 'f') /*print a-f to finish hexbase*/
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}