#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */

void times_table(void)
{
int i, j, result;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 10; j++)
{
result = i * j;
if (j == 0)
{
_putchar('0');
}
else if (result < 10)
{
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
if (j != 10)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
