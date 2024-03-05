#include "main.h"
#include <stdio.h>

/**
*leet - function that encode a string
*Return:returns encoded string
*/
char *leet(char *)
{
	int i, j;
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	for (i = O; s[i] != '\O'; i++)
	{
		for (j = O; j < 10; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
		}
	}
	return (s);
}
