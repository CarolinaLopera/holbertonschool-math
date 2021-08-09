#include "holberton.h"
/**
 * substraction - This function subtracts two number.
 *
 * Return: Always void.
 * @c1: is a variable double to subtract.
 * @c2: is a variable double to subtract.
 * @c3: is the result of the substraction.
 */
void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
