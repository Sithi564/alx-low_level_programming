#include <stdio.h>
/**
 *main - Entry point
 *Return: 0
 */
int main()
{
	char letter = 'a', cLetter = 'A';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (cLetter <= 'Z')
	{
		putchar(cLetter);
		cLetter++;
	}
	putchar('\n');
	return (0);
}