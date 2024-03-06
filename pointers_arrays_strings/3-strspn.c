#include "main.h"
#include <stdio.h>
/**
* _strspn - C function that gets the length of a prefix substring.
*@s: initial segment
*@accept: bytes from accept
*
*Return: s
*/
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int end = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				end++;
				break;
			}
		}
		if (s[i] != accept[j])
			return (end);
	}
	return (end);
}
