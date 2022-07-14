#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 *
 * @src: source to copy
 *
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
