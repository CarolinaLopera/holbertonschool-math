#include "holberton.h"
/**
 * multiplication - This function multiply two complex numbers.
 *
 * Return: Always void.
 * @c1: is a variable double to multiply.
 * @c2: is a variable double to multiply.
 * @c3: is the result of the multiplication.
 */
void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = ((c1.im * c2.im) * -1) + (c1.re * c2.re);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
