#include "main.h"

/**
*swap_int - swaps the values of two integers
*@a: 1st int
*@b: 2nd int
*Return: 0
*/

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;

}
