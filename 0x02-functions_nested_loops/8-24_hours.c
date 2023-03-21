#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - func
*/
void jack_bauer(void)
{
for (int hour = 0; hour < 24; hour++)
{
for (int minute = 0; minute < 60; minute++)
{
putchar('0' + hour / 10);
putchar('0' + hour % 10);
putchar(':');
putchar('0' + minute / 10);
putchar('0' + minute % 10);
putchar('\n');
}
}
}
