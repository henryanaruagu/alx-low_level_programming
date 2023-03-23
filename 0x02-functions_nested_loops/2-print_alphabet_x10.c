#include "main.h"
/**
 * print_alphabet_x10 - make the alphabet x10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
char ty;
int i;
i  = 0;
while (i < 10)
{
for (ty = 'a'; ty <= 'z'; ty++)
{
_putchar(ty);
}
_putchar('\n');
i++;
}
}
