#include "main.h"

/**
 * print_binary -  Converts a number from base 10 to binary
 * @list: List of arguments passed to this function
 * Return: The length of the number printed
 */

int print_binary(va_list list)
{
    unsigned int num, base;
    int i, len, len2;
    char *str;
    char *total;

    base = 2;

    num = va_arg(list, unsigned int);

    if (num == 0)
        return(_write_char('0'));
    if (num < 1)
        return (-1);
    len = base_len(num, base);
    str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);

    for (i = 0; num > 0; i++)
	{
		str[i] = num % 2; 
		num = num / 2;
        total[i] = str[i];
	}
    len2 = _strlen(str);
    for (j = 0; j <= len2; j++)
    {
        total[i+j] = total[i];
    }
    str[i+j] = '\0';
    write_base(str);
    free(str);
    return (len);
}