#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of n and prints out whether it is
 * greater than 5, 0, or less than 6
 * Return: 0
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	printf("last digit of %i is %i and is greater than 5\n", n, lastd);
	else if (lastd == 0)
	printf("last digit of %i is %i and is 0\n", n, lastd);
	else
	printf("last digit of %i is %i and is less than 6 and not 0\n", n, lastd);
	return (0);
}

