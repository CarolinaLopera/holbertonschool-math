#include "holberton.h"
/**
 * conjugate - This function conjugate a complex number.
 *
 * Return: Always void.
 * @c: is a variable double of structur complex.
 */
complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
