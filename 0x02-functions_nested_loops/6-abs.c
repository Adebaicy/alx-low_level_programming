#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int _abs(int c)
{
if (c < 0)
{
return(-1 * c);
}
else if(c > 0)
{
return (c);
}
else
{
return 0;
}
}
