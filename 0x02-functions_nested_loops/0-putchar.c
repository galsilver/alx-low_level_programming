#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char main[] = "Main";
	int i = 0;

	while (main[i] != '\0')
	{
		_putchar(main[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
