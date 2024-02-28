#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char n;
for (n = 'a'; n <= 'z'; n++)
_putchar(n);
}
if (i != 9)
_putchar('\n');
}
