#include "main.h"
/**
 * main - Print "_Prints" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char _prints[] = "_putchar";
	int i = 0;

	while (_prints[i] != '\0')
	{
		_putchar(_prints[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
