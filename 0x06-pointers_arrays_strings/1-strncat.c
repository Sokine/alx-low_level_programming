#include "main.h"

/**
 * _strncat - function to concatenate srings
 * @dest : pointer
 * @src : pointer
 * @n : varible integer
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; dest[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
