#include "main.h"

/**
* _strlen - returns the length of a string.
*
* @s: char to be checked
* description: returns the length of a string
* Return: 0 (success)
*/

int _strlen(char *s)
{
	int j = 0;

	for (; *s++)
		j++;
	return (j);
}
