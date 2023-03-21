#include "main.h"

/**
 * _abs - function
 * @c: the number to compute
 * Return: Abs value of c or 0
*/

int _abs(int c)
{
if (c)
{
int abs_val = c * -1;
return (abs_val);
}
return (c);
}
