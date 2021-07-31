#include "holberton.h"
#include <math.h>
/**
 * modulus - check the code for Holberton School students.
 *
 * Return: Always void.
 * @c: is a variable double of structur complex.
 */
double modulus(complex c)
{
	double pow_re, pow_im, mod;
	double x = 2.0, result_pow;

	pow_re = pow(c.re, x);
	pow_im = pow(c.im, x);
	result_pow = pow_re + pow_im;
	mod = sqrt(result_pow);

	return (mod);
}
