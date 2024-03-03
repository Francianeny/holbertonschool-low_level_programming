#include "main.h"
#include <stdio.h>

/**
* puts_half - half of a string
* @str: half of a string
*
* Return: void
*/

void puts_half(char *str)
{
int len = _strlen(str);
int i;
if (len % 2 == 0)
i = len / 2;
else
i = (len + 1) / 2;
while (i < len)
{
_putchar(str[i]);
}
_putchar('\n');
}
