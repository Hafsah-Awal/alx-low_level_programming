#include "main.h"

/**
 * print_line - Draws a straight line using a character _
 * @n: The number of _ characters to be printed out.
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
