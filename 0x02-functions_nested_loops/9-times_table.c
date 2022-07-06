#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 */
void times_table(void)
{
	int x, y, j;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			j = x * y;
			if (y == 0)
				_putchar(k + '0');
			if (y != 0 && j < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
