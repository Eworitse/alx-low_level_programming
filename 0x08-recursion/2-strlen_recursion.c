#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
		return (1 + _strlen_recursion(s));
}
