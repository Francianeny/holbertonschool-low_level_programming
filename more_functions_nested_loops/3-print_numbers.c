#include "main.h"

/**
 * _putchar - check speak for themselves
 * @c: themselves
 * @void: speak
 * Return: Always 0.
 */
void _putchar(char c)
{
putchar(c);
}
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
