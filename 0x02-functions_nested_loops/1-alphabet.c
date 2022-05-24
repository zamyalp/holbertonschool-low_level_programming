#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */


void print_alphabet(void)
{
char alpha;
alpha = 'a';

while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}

putchar('\n');
}
