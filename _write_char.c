#include "main.h"

/**
 * _write_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
