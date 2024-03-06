#include "main.h"

/**
* _memcpy - function that copy memory area
* @dest: memory area 1
* @src: memory area 2
* @n: nbr of bytes to be set
* Return: to the dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
