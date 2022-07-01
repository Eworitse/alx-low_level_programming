nclude <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * print the Last digit of the number
 * store in a variable n
 * Return: 0
 */

int main(void)
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (0);
}
