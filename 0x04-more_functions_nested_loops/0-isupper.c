#include "main.h"

/**
 * _isuper - checks if a character is uppercase
 * @c: Variable text
 * Return: Always 0
 */
int _isuper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
