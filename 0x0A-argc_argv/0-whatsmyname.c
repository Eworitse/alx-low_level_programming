#include <stdio.h>

/**
 * main -  function that prints out its name
 * @argc: argc parameter
 * @argv: argv parameter
 *
 * Return: 0 on success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
