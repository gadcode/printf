# **`printf()`**

-------------------------

This repo emcompasses the `printf()` function project. printf is a C computer programming language built-in function that prints/outputs a specified message to the standard output. We, @MajestyChibuikem and @gadcode are tasked to create our own printf function that mimicks that of C's, and produces outputs according to a format.

## **Description**
================

The printf function prints a format control string of different data types on the standard output, its roots are in the C programming language. Being a functional way to produce a precise output format for printing numerical values or ASCII characters from format specifiers that have been passed on in the argument.

## **Prototype**
===============

This _printf function produces output according to a format:

    int _printf(const char *format, ...);

## **Formats**
=============

| Flag | Output |
| ---- | -------- |
| %c | Prints a single character |
| %s | Prints a string |
| %d | Prints a integer as a signed decimal (base 10) number |
| %i | Prints same as "d", integer in base 10 |
|          |                      |

## **Compilation**
================

To compile a file with the function is necessary to add all the .c files involved in the program (functions, main files, etc). All files will be compiled on Debin Linux distribution using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89. Here is an example:

    `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o name_of_executable`

To execute: `./name_of_executable`

## **Files Description**
====================

The _printf function produces output according to a format:

| File | Description |
| ---- | ----------- |
| main.h | Contains the struct and prototypes to the _printf function |
| _printf.c | Contains the main function of the _printf |
| ... | Other functions or files will be added as the program advances |

## **Contributing**
====================

This is a project in the [ALX Software Engineering](https://www.alxafrica.com/) program pioneered by the African Leadership Group (ALG).

## **Authors**
=============

- [Majesty Chibuikem](https://github.com/MajestyChibuikem) - Outstanding Software Engineer
- [Shalom Gad](https://github.com/gadcode) - Distinguished Security Engineer

--------------------------------
