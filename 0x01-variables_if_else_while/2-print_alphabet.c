#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main  - main block
 * description You can only use the putchar function
 * return 0
 */
int main(void)
{
	int n;

	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');

	return (0);
}
