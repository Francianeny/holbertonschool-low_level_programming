#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @c: character
 * @size: the size of the memory to print
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
  char *strout;
  unsigned int i, j;

  if (str == NULL)
    return (NULL);

  for (i = 0; str[i] != '\0'; i++)
    {
      strout = (char *)malloc(sizeof(char) * (i + 1));

      if (strout == NULL)
	return (NULL);
    }
  for (j = 0; j <= i; j++)
    {
      strout[j] = str[j];
    }
  return (strout);
}
