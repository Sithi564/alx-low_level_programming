#include <stdio.h>



int main(void)
{
	int hours = 1, minutes;

	while (hours < 10)
	{
		int output = hours;
		hours++;
		printf("0%d:\n", output);
	}
	while (hours < 59)
	{
		int output = hours;
		hours++;
		printf("%d:\n", output);
	}
}	
