#include <stdio.h>

/**
 * main - Program that prints the alphabet in lowercase then uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lr;

	for (lr = 'a'; lr <= 'z'; lr++)
		putchar(lr);

	for (lr = 'A'; lr <= 'Z'; lr++)
		putchar(lr);

	putchar('\n');

	return (0);
}
