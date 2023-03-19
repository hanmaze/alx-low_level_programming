#include <stdio.h>

/**
 *main - Program that pints all the numbers of base 16 in lowercase.
 *Return: Always 0.
 */

int main(void)
{
	int nr;
	char lr;

	for (nr = 0; nr < 10; nr++)
		putchar((nr % 10) + '0');

	for (lr = 'a'; lr <= 'f'; lr++)
		putchar(lr);

	putchar('\n');

	return (0);
}
