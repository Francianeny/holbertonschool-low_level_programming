#include "main.h"

/**
*  reverse_array - function that reverse content of array
*  @a: array
*  @n: number of elements
*/

void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
while (start < end)
{
int temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}
}

int main(void)
{
int a[] = {1, 2, 3, 4, 5};
int n = sizeof(a) / sizeof(a[0]);
reverse_array(a, n);
for (int i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
return (0);
}
