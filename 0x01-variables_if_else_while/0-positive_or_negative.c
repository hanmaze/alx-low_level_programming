#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - entry point of the program 
  *
  * this program print whether the number is negative,positive or zero
  * Return: always 0 (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else (n < 0);
		printf("%d is negative\n", n);
	return (0);
}
