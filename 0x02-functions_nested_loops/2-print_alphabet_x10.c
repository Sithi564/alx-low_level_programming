#include <stdio.h>
/**
 * Print_alphabet_x10 function
 * return 0
*/
void print_alphabet_x10(void);
int main()
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void)
{
	char i , line = '\n';
	int count = 0;

	while (count < 10)
	{
		i = 'a';
		while(i <= 'z')
		{
			putchar(i);
			i++;
		}
		count++;
		putchar(line);
	}
	
}
  