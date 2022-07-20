#include "main.h"

/**
 * _pow_recursion - function that returns x raised to power y
 * @x: the base number
 * @y: the power of x
 *
 * Return: power result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
