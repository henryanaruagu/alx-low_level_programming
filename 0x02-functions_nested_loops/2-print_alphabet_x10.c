#include "main.h"
/**
 * print_alphabetx10 - make the alphabet x10 times
 *
 * Return: void
 */
void print_alphabetx10(void)
{
char ty;
int i;
i  = 0;
while (1 < 10)
{
for (ty = 'a'; ty <= 'z'; ty++)
{
_putchar(ty);
}
_putchar('\n');
i++;
}
}
