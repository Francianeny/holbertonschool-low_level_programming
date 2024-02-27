#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
  char az,AZ;
for (az = 'a' ; az <= 'z' ; az++)
putchar(az);
putchar('\n');
for (AZ = 'A' ; AZ <= 'Z' ; AZ++)
  putchar(AZ);
putchar('\n');
return (0);
}
