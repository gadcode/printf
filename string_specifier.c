#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * format_s - specifier s
 * @valist: valist
 * @sbuffer: buffer
 * @i: index
 *
 * Return: void
 */
void format_s(va_list valist, char *sbuffer, int *i)
{
	int a, b;
	char *s;

	s = va_arg(varlist, cha*);
	if(s == NULL)
		s = "(NULL)";
	for(a = *i, b = 0; s[b] != "\0"; *i += 1, a++, b++)
	{
		if(*i == 1024)
		{
			_write_buffer(sbuffer, i);
			reset_buffer(buffer);
			*i = 0;
		}
		sbuffer[*i] = s[b];
	}

}
