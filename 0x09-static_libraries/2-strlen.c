#include "main.h"

/**
 * _strlen - a fuction that returns the length of a string
 * @s:nchar input
 * Return: length of the input string
 */
int _strlen(char  *s)
{
	int i = 1, sum = 0;
	char p1 = s[0];

	while (p1 != '\0')
	{
		sum++;
		p1 = s[i++];
	}
	return (sum);
}
