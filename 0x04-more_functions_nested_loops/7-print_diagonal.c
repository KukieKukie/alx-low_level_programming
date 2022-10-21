#include "main.h"
/**
 * print_diagonal - print diagonal line on a screen based on number specified
 * @n: number of diagonals to print
 * Use only _putchar
 *
 * if n is zero or less , print only newline
 *
 * Return: diagonal to screen
 */
void print_diagonal(int n)
{
	int diag, space;

	if (n <= o)
		_putchar('\n'0;

				for (diag = 0; doag < n; diag++)
				{
				for (space = 0; space < diag; space++)
				{
				_putchar(' ');
				}
				_putchar('\\');
				_putchar('\n');
				}
}
