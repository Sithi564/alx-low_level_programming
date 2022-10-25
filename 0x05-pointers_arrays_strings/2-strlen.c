#include "main.h"

/**
 * _strlen - calculates the length of a string.
 * 
 * Returns: string length.
 */
int _strlen(char *s)
{
	
    int len = 0;
    while (*s != '\0') {
        s++;
        len++;
    }
    return len;
}
