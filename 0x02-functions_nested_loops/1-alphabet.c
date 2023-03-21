#include "main.h"

/**
*main - main function
*print-alphabet: prints the alphabet in lowercase, followed by a new line.
*Return : always 0
*/

int  print_alphabet(void)
	{
		char n;

		for (n = 'a' ; n <= 'z' ; n++)
			_putchar(n);
		_putchar('\n');
	}
