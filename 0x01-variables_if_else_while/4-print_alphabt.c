 #include <stdio.h>

/**
 *main - Program that prints the alphabet in lowercase, except for q and e.
 *Return: Always 0.
 */

int main(void)
{
	char lr;

	for (lr = 'a'; lr <= 'z'; lr++)
	{
		if (lr != 'e' && lr != 'q')
			putchar(lr);
	}

	putchar('\n');

	return (0);
}
