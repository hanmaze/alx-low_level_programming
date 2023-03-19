#include <stdio.h>

/**
*main - a program that prints the alphabet in lowercase.
*Return: 0 (success)
*
*/

int main(void)
{
	char Lt;

	for(Lt ='a'; Lt <= 'z'; Lt++)
		putchar(Lt);
	
	putchar('\n');

	return (0);
}
