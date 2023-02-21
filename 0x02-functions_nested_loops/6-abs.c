#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _abs(int a)
{
	int result;

	if (a < 0)
		result = a * (-1);
	else
		result = a;

	return (result);
}
