# PRINTF
Write a function that produces output according to a format (reference: Printf function).

![alt text](https://github.com/ObedRav/holbertonschool-printf/blob/main/_printf.drawio.png)

## Description
The _printf() function produces output according to a format which is described
below. This function write its output to the stdout, the standard output stream. Returns the count of printed characters when the function is successful and -1 when the function fails.

The available convertion specifiers are:
+ %c: Prints a single character.
+ %s: Prints a string of characters.
+ %d: Prints integers.
+ %i: Prints integers.
+ %b: Prints the binary representation of an unsigned decimal.
+ %u: Prints unsigned integers
+ %r: Prints a reversed string
+ %%: Prints a percentage

### Table of content
1. [Makefile](./Makefile): Makefile that contains the compiler, the clean method, etc.
2. [Header](./main.h): The header file, contains all prototipes's functions, and the libraries use it in the project.
3. [Tests](./tests): The folder of tests, contains all tests files.
4. [Base Functions](./_base_functions.c): C file that contains the functions that change a int to another numerical system.
5. [The base of the function](./_printf.c): The principal function.
6. [Write Char](./_write_char.c): Writes the character c to stdout.
