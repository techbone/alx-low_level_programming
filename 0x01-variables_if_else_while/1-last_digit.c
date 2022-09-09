#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
  * main - the entry point
  * check some argument about the last digit of a function
  * Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n > 0)
		printf("%d is a negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
