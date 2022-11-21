#include "main.h"

/**
 * print_number - print a number
 * @list: list of numbers
 * Return: The number of arguments printed
 */

int print_number(va_list list)
{
	int numberList, len, div;
	unsigned int num;

	numberList = va_arg(list, int);
	div = 1;
	len = 0;
	num = 0;

	if (numberList < 0)
	{
		len += _write_char('-');
		num = (numberList * -1);
	}
	else
	{
		num = numberList;
	}

	for (; (num / div) < 9; )
		num *= 10;

	for (; div != 0; )
	{
		len += _write_char('0' + (num / div));
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
