#include "main.h"

/**
*main - main function
*descritpion: print the alphabet x10 in lowercase.
*Return : always 0
*/

void print_alphabet_x10(void)
	{
		int n;
		int l;

		for (n = 1 ; n <= 10 ; n++)
			{
				for (l = 'a' ; l <= 'z' ; l++)
					_putchar(l);
				_putchar('\n');
			}
	}
