#include <stdio.h>
#include "main.h"

/**
 * void puts2(char *str) prints every other character of a string
 *Return: Always 0.
 */
void puts2(char *str)
{
int i = 0;
while (i >= 0)
{
if (str[i] == '\0')
{
putchar('\n');
break;
}
if (i % 2 == 0)
putchar(str[i]);
i++;
}
}
