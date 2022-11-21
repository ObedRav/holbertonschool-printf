#include "main.h"

/**
 * print_char - print a character
 * @list: list of characters
 * Return: Will returns the amount of characters printed
 */

int print_char(va_list list) 
{
    _write_char(va_arg(list, int));
    return (1);
}

/**
 * print_string - print a string
 * @list: list of arguments
 * Return: Will returns the amount of characters printed
 */

int print_string(va_list list)
{
    int index;
    char *string;

    string = va_arg(list, char *);
    if (string == NULL)
        string = "(null)";
    for (i = 0; string[i] != '\0'; i++)
        _write_char(string[i]);
    
    return (i);
}

/**
 * print_percent - print a percentage
 * @list: list of arguments
 * Return: Will returns the number of characters printed
 */

int print_percent(va_list list)
{
    _write_char('%')
    return (1);
}

/**
 * print_number - Print numbers
 * @list: list of numbers
 * Return: Will returns the amount of characters printed
 */

int print_number(va_list list)
{
    int length;

    length = print_number(list);
    return (length);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: list of unsigned integers
 * Return: Will returns the amount of characters printed
 */

int unsigned_integer(va_list list)
{
    unsigned int num;

    num = va_arg(list, int);

    if (num == 0)
        return (print_unsigned_number(num));

    if (num < 0)
        return (-1);

    return (print_unsigned_number(num));
}