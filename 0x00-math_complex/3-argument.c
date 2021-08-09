#include "holberton.h"
#include <math.h>
/**
 * argument - returns the argument of a given complex number.
 *
 * Return: Always double.
 * @c: is a variable double of structur complex.
 */
double argument(complex c)
{
	double arg = atan(c.im / c.re);

	if (c.re > 0 && c.im > 0)
		return (arg);
	if (c.re < 0 && c.im > 0)
		return (PI - arg);
	if (c.im < 0 && c.im > 0)
		return ((-1) * arg);
	if (c.im < 0 && c.re < 0)
		return ((-1) * (PI - arg));
	return (0.0);
}
