#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @n: length of number of characters to copy
 * @dest: destination string
 * @src: source string
 *
 * Return: copied string
 */
char _strncopy(char *dest, char *src, int n)
{
	int index;

	/* find length, compare strings */
	for (index = 0; index < n && *(src + index); index++)
	{
		*(dest + index) = *(src + index);
	}
	/* normal length of destination string, ending in null char */
	for (; index < n; index++)
	{
		*(dest + index) = '\0';
	}
	return (dest); /* copird string */
}
