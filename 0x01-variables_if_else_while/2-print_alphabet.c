#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry block
 * description You can only use the putchar function
 * return 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
