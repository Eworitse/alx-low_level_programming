#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argc parameter
 * @argv: an array of the listed command
 * Return: 0 for success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
