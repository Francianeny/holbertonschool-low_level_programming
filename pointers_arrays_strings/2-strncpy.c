
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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
