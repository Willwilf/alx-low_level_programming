#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate a string
 * @str: char
 * Description: duplicate a string
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0;
	int a = 0;
	char *ife;

	if (str == NULL)
	{
		return (NULL);
	}

	while (i != '\0')
	{
		i++;
	}

	ife = malloc(i * sizeof(char) + 1);

	if (ife == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a]; a++)
	{
		ife[a] = str[a];
	}
	return (ife);
}
