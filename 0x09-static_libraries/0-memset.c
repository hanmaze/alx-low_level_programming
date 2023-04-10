#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: starting of memory to be filled
* @b: desired value
* @n: number of bytes to be changed
* Return: changed array with new value for n bytes
*/

char *_memset(char *s, char b, unsigned int n)
{
		int j = 0;

		for (; n > 0; j++)
		{
			s[j] = b;
			n--;
		}
		return (s);
}
