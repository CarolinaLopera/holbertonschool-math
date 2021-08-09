#include <math.h>
#include "holberton.h"
/**
 * complex_from_mod_arg - Update all parts of a complex number.
 *
 * Return: Always void.
 * @m: is the module of the complex number.
 * @arg: is the argumet of the complex number.
 * @c3: is the result of the division.
 */
void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
