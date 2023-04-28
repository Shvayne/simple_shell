#include "main.h"

/**
 * _memset - Fills memory block with a constant byte
 * @s: Pointer to memory block
 * @byte: Byte to fill memory with
 * @n: Number of bytes of memory block to be filled
 *
 * Return: Pointer to the memory area
 */
char *_memset(char *s, char byte, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = byte;
	return (s);
}
