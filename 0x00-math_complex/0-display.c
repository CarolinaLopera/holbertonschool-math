#include <stdio.h>
#include "holberton.h"
/**
 * display_complex_number - check the code for Holberton School students.
 *
 * Return: Always void.
 * @c: is a variable double of structur complex.
 */
void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
		return;

	if (c.im == 0)
		printf("%g\n", c.re);
	else if (c.re == 0)
		printf("%g\n", c.im);
	else if (c.re < 0 && c.im < 0)
	{
		c.re = c.re * -1;
		c.im = c.im * -1;
		printf("- %g - %gi\n", c.re, c.im);
	}
	else
		printf("%g + %gi\n", c.re, c.im);
}
