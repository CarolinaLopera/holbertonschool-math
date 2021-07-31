#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#define PI 3.14159265
/**
 * struct Complex - is a struct that get two doubles.
 *
 * @re: Is a variable double. Is real part to the number complex.
 * @im: Is a variable double. Is imaginaty part to the number complex.
 */
typedef struct Complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);

#endif
