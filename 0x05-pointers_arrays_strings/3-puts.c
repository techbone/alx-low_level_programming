#include "main.h"
/**
 * _puts - prints a string, to stdout
 * @str: value to be evaluate.
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != 0; c++)
	{
		putchar(str[c]);
	}
	putchar('\n');
}
