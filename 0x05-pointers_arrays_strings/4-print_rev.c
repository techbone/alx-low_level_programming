#include "main.h"
/**
 * print_rev - func that prints a string, in reverse, followed by a new line
 * @s: declaration of s and paramters for the function
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{
		continue;
	}
	for (c = c - 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
