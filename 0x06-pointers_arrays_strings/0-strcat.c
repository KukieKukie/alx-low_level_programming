#include "main.h"

/**
 * strcat - concatenate two strings
 *  @dest: first string (destination)
 *  @src: second string (source)
 *
 *  Return: Always 0
 */
char *_strcat(char *dest, const char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
