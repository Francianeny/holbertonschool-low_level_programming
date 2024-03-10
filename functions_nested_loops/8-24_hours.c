#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void)
{
int hour, minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar('0' + (hour / 10));
_putchar('0' + (hour % 10));
_putchar(':');
_putchar('\n');
}
}
}
