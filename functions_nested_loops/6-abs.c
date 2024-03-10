#include <stdio.h>
#include "main.h"
/**
 * _abs - Computes the absolute value
 * @i: input number as an integer.
 * Return: absolute value
 */
int _abs(int i)
{
if (i >= 0)
{
return (i);
}
else
{
return (i * -1);
}
}

int main(void)
{
int i = -1;
int r = _abs(i);
printf("%d\n", r);
return (0);
}
