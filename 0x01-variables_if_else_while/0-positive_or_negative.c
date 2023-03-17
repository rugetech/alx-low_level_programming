#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - Entry point
 * Generate random numbers(pos/neg/zero)
 *
 * Return: Always(0)
 *
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*Generates random numbers */
if (n > 0)
{
	printf(n, " is positive.%d\n");
}

else if (n < 0)
{
	printf(n, " is negative.%d\n");
}

else
{
	printf(n, " is zero.%d\n");
}

return (0);
}
