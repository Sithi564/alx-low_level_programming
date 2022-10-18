#include <stdio.h>
/**
 * print_alphabet
 * Return: 0
 */
void print_alphabet(void);
int main()
{
	 print_alphabet();
    return (0);
}
void print_alphabet(void)
{
   char i;

	i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
