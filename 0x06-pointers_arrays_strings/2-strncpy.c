#include "main.h"
#include <string.h>

/**
 * _strcpy - to copy string
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
