#include "main.h"
#include <stdio.h>

/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
for (int a = 0; i < n; i++)
{
printf("%d ", a[i]);
}
_putchar('\n');
}
int main(void)
{
int a[] = {1, 2, 3, 4, 5};
int n = sizeof(a) / sizeof(a[0]);
print_array(a, n);
return (0);
}
