#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints out the alphabet in lowercase
 * then in uppercase
 * followed by a newline
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10); /*it is the ASCII text code for new line*/
	return (0);
}
