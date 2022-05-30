#include "main.h"
/**
 * print_line - prints underscore n times
 * @n: number if times printed
 * Return: a straight line
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
