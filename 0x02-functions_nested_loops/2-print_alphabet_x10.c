#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
int d = 1;
while (d < 11)
{
char  c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
d++;
}
}
