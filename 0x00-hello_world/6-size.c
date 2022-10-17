#include <stdio.h>
/**
 * main - print out sizes of various types in C
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(S)\n", sizeof(a));
	printf("size of an  int: %lu byte(S)\n", sizeof(b));
	printf("size of a long int: %lu byte(S)\n", sizeof(c));
	printf("size of a long long int: %lu byte(S)\n", sizeof(d));
	printf("size of a float: %lu byte(S)\n", sizeof(f));
	return (0);
}
