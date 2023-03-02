#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_buffer(CSV_BUFFER *buffer)
{
int i, j;
printf("\n");
for (i = 0; i < buffer->rows; i++)
{
for (j = 0; j < buffer->width[i]; j++)
printf("%c%s%c%c", buffer->text_delim, buffer->field[i][j]->text, buffer->text_delim, buffer->field_delim);
}
printf("\n");
}
printf("\n\n");
}
