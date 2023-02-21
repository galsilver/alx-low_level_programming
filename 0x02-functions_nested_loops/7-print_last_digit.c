#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	char b;

	if (a >= 0)
		b = (a % 10);
	else if (a < 0)
		b = -(a % 10);
	_putchar(b + '0');

	return (b);
}

