#include "main.h"

/**
 * print_number - print a number
 * @args: list of numbers
 * Return: The number of arguments printed
 */

int print_number(va_list args)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(args, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _write_char('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}

/**
 * print_unsgned_number - print an unsigned number
 * @list: list of unsigned numbers
 * Return: The number of arguments printed
 */

int print_unsgned_number(unsigned int list)
{
	int len, div;
	unsigned int num;

	div = 1;
	len = 0;

	num = list;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
