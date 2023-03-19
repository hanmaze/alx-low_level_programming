#include <stdio.h>

/**
 *main - Program that pints all possible combinations of single-digit numbers.
 *Return: Always 0.
 */

int main(void)
{
	int nr;

	for (nr = 0; nr <= 9; nr++)
	{
		putchar((nr % 10) + '0');
		if (nr == 9)
		continue;		
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
