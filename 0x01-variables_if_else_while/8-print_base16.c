#include <stdio.h>

/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
