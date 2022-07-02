#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabets in lowercase
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
