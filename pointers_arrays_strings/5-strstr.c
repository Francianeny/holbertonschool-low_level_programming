#include "main.h"
#include <stdio.h>

/**
* _strstr - C function that locates a substring
*@needle: substring
*@haystack: string
*
*Return: Returns a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (haystack + i - j + 1);
		}
		else
		{
			i += j;
			j = 0;
		}
	}
	return (0);
}
