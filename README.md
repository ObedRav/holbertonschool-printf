# C - _PRINTF
Write a function that produces output according to a format (reference: Printf function).

![alt text](https://github.com/ObedRav/holbertonschool-printf/blob/main/_printf.drawio.png)

## Description :spiral_notepad:
_printf is a custom implementation of the C standard library's printf function. The goal of this project is to recreate the functionality of printf in a way that is clear, concise, and easily extensible. This implementation supports many of the features of printf, including formatting of strings, numbers, and other data types, as well as the ability to print to standard output and files.

## Table of content :memo: 
1. [Makefile](./Makefile): Makefile that contains the compiler, the clean method, etc.
2. [Header](./main.h): The header file, contains all prototipes's functions, and the libraries use it in the project.
3. [Tests](./tests): The folder of tests, contains all tests files.
4. [Base Functions](./_base_functions.c): C file that contains the functions that change a int to another numerical system.
5. [The base of the function](./_printf.c): The principal function.
6. [Write Char](./_write_char.c): Writes the character c to stdout.

## Usage :pencil2:
To use the _printf function, include the "main.h" header file in your C program and call the function using the following syntax:

```
_printf(format, arguments...)
```

The format string is a character string that specifies how the arguments following it should be formatted and printed. The arguments can be of any data type supported by printf.

## Features :magic_wand:

_printf supports the following format specifiers:
+ `%c`: Prints a single character.
+ `%s`: Prints a string of characters.
+ `%d`: Prints integers.
+ `%i`: Prints integers.
+ `%b`: Prints the binary representation of an unsigned decimal.
+ `%u`: Prints unsigned integers
+ `%r`: Prints a reversed string
+ `%%`: Prints a percentage

## Examples :dart:
Here are some examples of how to use _printf:

```
#include "main.h"

int main(void)
{
    _printf("Hello, world!\n");
    _printf("The first 10 prime numbers are: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", 2, 3, 5, 7, 11, 13, 17, 19, 23, 29);
    _printf("Printing a string: %s\n", "Hi, How are you?");
    _printf("Printing a percentage: %%\n");
    return (0);
}

```

## Bugs :lock:
If you find any bug, please, let us know.

## Styling
All files have been written in the [Betty Style](https://github.com/hs-hq/Betty).

## Authors :grey_exclamation:
* **Obed Rayo** <a href="https://github.com/ObedRav" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>

* **Camilo Estrada** <a href="https://github.com/cestrad5" rel="nofollow"><img align="center" alt="github" src="https://www.vectorlogo.zone/logos/github/github-tile.svg" height="24" /></a>
