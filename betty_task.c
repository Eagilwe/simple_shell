#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function thar prints binary of a numer.
 * @n: integer to print binary.
 * Return: binary
 */

void print_binary(unsigned long int n)
{
unsigned long int z = n, mask = 1;
int x = 0;
while (z > 0)
{
x++;
z >>= 1;
}
x -= 1;
if (x > 0)
mask = mask << x;
while (mask > 0)
{
if (n & mask)
_putchar('1');
else
_putchar('0');
mask >>= 1;
}
}
