#ifndef MAIN_H
#define MAIN_H

/**
 * reset_to_98 - takes a function to a poiinter and later updates it to 98.
 * 
 * Return: Always returns 0
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two integers.
 * 
 * @param a: swaps value with b
 * @param b: swaps value with a
 */

void swap_int(int *a, int *b);

/**
 * _strlen returns the length of a string
 * 
 */

int _strlen(char *s);

/**
 * _puts - prints str to stdout
 * 
 * @param str contains string to be uotput
 */
void _puts(char *str);

/**
 * @brief Prints a string in reverse
 * 
 * @param s: string to be printed
 * @return: always return 0
 */

void print_rev(char *s);

/**
 * @brief function reverses a string
 * 
 * @param s string to be reversed
 */
void rev_string(char *s);

/**
 * @brief prints every other character of a string from the first str
 * 
 * @param str string to be printed
 */
void puts2(char *str);

/**
 * @brief print half a string
 * 
 * @param str string to be printed
 */
void puts_half(char *str);

#endif
