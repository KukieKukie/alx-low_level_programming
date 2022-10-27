#include "main.h"

/**
 * strcat - links two strings
 *  @dest: first string (destination)
 *  @src: second string (source)
 *
 *  Return: Always return 0
 */
char *strcat(char *dest, const char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (s);
}
