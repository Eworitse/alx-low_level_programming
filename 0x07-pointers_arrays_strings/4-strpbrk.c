#include "main.h"

/**
 * _strpbrk - searches a string for the first occurence of s
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for
 *
 * Return: if a set is matcehd, a pointer,
 * if not, NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
