#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
/**
 *print_alphabet - prints a string ina a array via a loop
 */

void print_alphabet(void)
{
char ch;
ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}

_putchar('\n');
}
