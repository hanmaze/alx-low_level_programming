#include <stdio.h>
#include <ctype.h>

/**
*main - Write a program that prints the alphabet in lowercase.
*Return: 0 (success)
*
*/

int main(void)
	{
		int Lc = 'a';
		while (Lc <= 'z')
			{
				putchar(Lc);
				Lc += 1;
			}
		putchar('\n');
		return (0);
	}
