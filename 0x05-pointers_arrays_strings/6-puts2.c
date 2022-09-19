#include "main.h"
/**
 * puts2 - prints string values.
 * @str: declaration of str and paramters for the function puts2
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	char c;

	for (i = 0; str[i] != 0; i++)
	{
		if (i % 2 == 0)
		{
			c = str[i];
			putchar(c);
		}
	}
	putchar('\n');
}
