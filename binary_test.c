#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a, b;

    b = 4;

    a = _printf("%b\n", 0);
    printf("%d\n", a);
    _printf("%b\n", b);
    return (0);
}