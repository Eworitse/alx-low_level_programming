#include "main.h"
#include <string.h>

/**
 * _strncpy - function that copies a string
 *
 * @dest: pointer to destination char
 * @src: pointer to sr  char
 * @n: number of bytes
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
