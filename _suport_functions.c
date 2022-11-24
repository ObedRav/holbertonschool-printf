#include "main.h"
/**
 * write_base - sends characters to be written on standard output
 * @str: String to parse
 */
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
}

/**
 * base_len - Calculates the length of an base number
 * @num: The number for which the length is being calculated
 * @base: Base to be calculated by
 * Return: An integer representing the length of a number
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int i;

	for (i = 0; num > 0; i++)
	{
		num = num / base;
	}
	return (i);
}

/**
 * _strlen - count chars
 * @s: data from user
 * Return: The result
 */
int _strlen(char *s)
{
	int i = 0, length = 0;

	while (s[i++])
	{
		length++;
	}

	return (length);
}