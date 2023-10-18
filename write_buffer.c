#include <stdio.h>

void custom_buffer_writer(char *buffer, int *num)
{
     snprintf(buffer, 20, "Integer: %d", num);
}
