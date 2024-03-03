#include "main.h"
#include <stdio.h>

/**
* rev_string - reverse a string
* @s: reverse a string
*
* Return: Always 0.
*/

void rev_string(char *s)
{
int i = 0, length;
length = _strlen(s) - 1;
while (length > i)
{
swap_char(s + length, s + i);
i++;
length--;
}
}
