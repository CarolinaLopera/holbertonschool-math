#include "holberton.h"
/**
 * addition - This function sum two complex numbers.
 *
 * Return: Always void.
 * @c1: is a variable double to add.
 * @c2: is a variable double to add.
 * @c3: is a variable double that is the result of the sum.
 */
void addition(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re + c2.re;
	c3->im = c1.im + c2.im;
}
