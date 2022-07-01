#include <stdio.h>

/**
 * main - prints the size of various compiled types
 *
 * Return:  0 if properly exited,otherwise non-zero
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
