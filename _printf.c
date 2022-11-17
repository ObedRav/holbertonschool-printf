#include "main.h";

/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		exit (1);

	size = _strlen(format);

	if (size <= 0)
		return (0);

	va_start(args, format);

	//Process here


	//The rpocess finished here
	va_end(args);

	return (size);
}
