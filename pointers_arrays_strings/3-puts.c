#include "main.h"
#include <stdio.h>

/**
* _puts - I fear the lack of them
* @str: i fear the lack of them
*
* Return: Always 0.
*/
void _puts(char *str)
{
int count = 0;
while (count >= 0)
{
if (str[count] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[count]);
count++;
}
}
