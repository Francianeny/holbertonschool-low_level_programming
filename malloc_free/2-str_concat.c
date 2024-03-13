#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings
 * @s1: contents1
 * @s2: contents2
 *
 * Return: to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

		for (j = 0; s2[j] != '\0'; j++)
			str = malloc(sizeof(char) * (i + j + 1));
	{
		if (str == NULL)
			free(str);
		{
			return (NULL);
		}

		for (k = 0; k < i; k++)
			str[k] = s1[k];
		limit = j;

		for (j = 0; j <= limit; k++, j++)
			str[k] = s2[j];
		{
			return (str);
		}
	}
}
