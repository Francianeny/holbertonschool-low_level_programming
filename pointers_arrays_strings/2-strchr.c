#include "main.h"

/**
* _strchr - function that locates a character in a string
* @s: string
* @c: character
*
*Return: to the s
*/
char *_strchr(char *s, char c)
{
for (s = 0; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
		return (0);
}
