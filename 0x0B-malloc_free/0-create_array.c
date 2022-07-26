#include "main.h"

/**
 * create_array - create an array of chars, initialize
 * with a specific char
 * @size: size of the array to be created, input size
 * @c: character an array is initialised with, input char
 *
 * Return: a pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
