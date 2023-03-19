#include <stdio.h>

/**
 *main - single digit numbers of base 10 starting from 0 using putchar
 *Return: 0 (success).
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}
