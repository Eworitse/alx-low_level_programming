#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	return (n % 10);
}
