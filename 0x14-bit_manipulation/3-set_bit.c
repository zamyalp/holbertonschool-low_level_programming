#include "main.h"
/**
 * set_bit - Entry Point
 * @n: input
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create mask with 1 at index (...00100...) to work on that index */
	mask <<= index;
	*n = (*n | mask);

	return (1);
}
