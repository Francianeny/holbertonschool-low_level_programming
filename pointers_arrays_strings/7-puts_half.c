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
if (len % 2 == 0)
len = len / 2;
else
len = (len + 1) / 2;
while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
_putchar('\n');
}
