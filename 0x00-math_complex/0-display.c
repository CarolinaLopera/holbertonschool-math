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
	if (c.im <= 0)
		printf("%g\n", c.re);
	else
		printf("%g + %gi\n", c.re, c.im);
}
