#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int f, rev;

	char character;

	for (f = 0; s[f] != 0; f++)
	{
		continue;
	}
	rev = 0;
	for (f = f - 1; rev < f; rev++)
	{
		character = s[f];
		s[f] = s[rev];
		s[rev] = character;
		f--;
	}
}
