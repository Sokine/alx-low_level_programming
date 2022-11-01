#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: dest memory area
 * @src: source memory area
 * @n: byte from memory area to copy
 *
 * Return: memory to replaced - dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; n++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
