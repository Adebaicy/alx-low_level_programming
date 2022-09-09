#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 * Return: Always 0 (Success)
 */
 
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  	if ( n > 0 ) 
  	{
    		print ("%d is positive", n);
  	}
  	else if ( n == 0)
  	{
    		print ("%d is zero", n);
  	}
  	else
 	{
    		print ("%d is negative", n);
  	}
	/* your code goes there */
	return (0);
}
