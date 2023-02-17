#include <stdio.h>
/**
 * main - entry block
 * a program that prints the alphabet in lowercase, uppercase, new line
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	a = 'A';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');

	return (0);
}
