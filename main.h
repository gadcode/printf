#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
void format_s(va_list valist, char *sbuffer, int i);
void format_c(va_list valist, char *cbuffer, int i);
void _write_buffer(char *buffer, int *i);
void reset_buffer(char buffer[]);
#endif /* PRINTF_H */
