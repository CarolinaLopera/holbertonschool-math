#include "holberton.h"
/**
 * conjugate - check the code for Holberton School students.
 *
 * Return: Always void.
 * @c: is a variable double of structur complex.
 */
complex conjugate(complex c)
{
	c.im = c.im * -1;
	return (c);
}
