#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1;

    c1.re = 3.5;
    c1.im = -3;
    c1 = conjugate(c1);
    display_complex_number(c1);
    c1 = conjugate(c1);
    display_complex_number(c1);
    return (0);
}