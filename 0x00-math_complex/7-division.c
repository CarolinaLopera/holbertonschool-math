#include "holberton.h"
/**
 * division - This function divide two complex numbers.
 *
 * Return: Always void.
 * @c1: is a variable double to divide.
 * @c2: is a variable double to divide.
 * @c3: is the result of the division.
 */
void division(complex c1, complex c2, complex *c3)
{
	complex conj, aux1;
	double result;

	conj.im = c2.im = c2.im * -1;
	conj.re = c2.re;

	aux1.re = ((c1.im * conj.im) * -1) + (c1.re * conj.re);
	aux1.im = (c1.re * conj.im) + (c1.im * conj.re);

	result = (c2.re * c2.re);
	result += (c2.im * c2.im);

	c3->re = (aux1.re / result);
	c3->im = (aux1.im / result);
}
