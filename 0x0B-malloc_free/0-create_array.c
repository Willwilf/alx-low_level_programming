#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array of size size and assign char c
 * Description: creates array of size size and assign char c
 * @size: the size of the memory required
 * @c: the placeholder
 * Return: pointer to the array, NULL
 */
char *create_array(unsigned int size, char c)
{
	char *PArray;
	unsigned int ife;

	if (size == 0)
	{
		return (NULL);
	}

	PArray = malloc(size * sizeof(char));
	if (PArray == NULL)
	{
		return (NULL);
	}
	for (ife = 0; ife < size; ife++)
	{
		PArray[ife] = c;
	}

	return (PArray);
}
