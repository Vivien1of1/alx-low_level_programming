#include "main.h"

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Returrn: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; src[i] != '\0'; 1++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
