#include "main.h"

/**
 * print_binary -  Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */

int print_binary(va_list list)
{
    unsigned int num;

    num = va_arg(list, unsigned int);

    if (num == 0)
        return(_write_char('0'));
    if (num < 1)
        return (-1):
}