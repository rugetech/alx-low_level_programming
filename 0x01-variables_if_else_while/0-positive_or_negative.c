#include <stdlib.h>
#include <time.h>

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
	printf("The number is positive. \n");

elif(n < 0)
	printf("The number is negative. \n");

else
	printf("The number is zero. \n");
return (0);
}
