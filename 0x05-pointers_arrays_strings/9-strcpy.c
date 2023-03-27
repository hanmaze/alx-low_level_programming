#include "main.h"

/**
* char *_strcpy -  copies the string pointed to by src.
* description: copies the string pointed to by scr 
* @dest: copy to
* @src: copy from
* return: string
*/

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y < x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
