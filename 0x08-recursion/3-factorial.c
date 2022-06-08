#include "main.h"

/**
 * factorial - 5 - (5 - 1)
 * @n: input
 * Return: always 0 (sucess)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
