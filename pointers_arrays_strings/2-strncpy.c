#include "main.h"
#include <stdio.h>

/**
*  _strncpy - C function that copies a string, including the
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int a;
a = 0;
while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}
while (a < n)
dest[a] = '\0';
return (dest);
}
