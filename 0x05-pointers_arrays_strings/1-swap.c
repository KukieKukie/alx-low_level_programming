#include "main.h"

/**
 * swap_in - swap the values of two integer variables
 * @a: first integer variable
 * @b: second integer variable
 *
 * Return: output of swap function
 */
void swap_in(int *a, int *b)
{
	int ptr_var;

	ptr_var = *a;
	*a = *b;
	*b = ptr_var;
}
