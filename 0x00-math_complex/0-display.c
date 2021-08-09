#include <stdio.h>
#include "holberton.h"
/**
 * display_complex_number - This function print a complex number.
 *
 * Return: Always void.
 * @c: is a variable double of structur complex.
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
		printf("%g\n", c.re);
	else if (c.im == -1)
		printf("%g - i\n", c.re);
	else if (c.im == 1)
		printf("%g + i\n", c.re);
	else if (c.im < -1)
	{
		c.im = c.im * -1;
		printf("%g - %gi\n", c.re, c.im);
	}
	else
		printf("%g + %gi\n", c.re, c.im);
}
