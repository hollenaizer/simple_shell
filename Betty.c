#include <stdio.h>
/**
 * main - Prints Small Letter Alphabet except e and q
 *
 * Return: 0
 */

int main(void)
{
char alphaBet;
for (alphaBet = 'a'; alphaBet <= 'z'; alphaBet++)
{
if (alphaBet != 'e' && alphaBet != 'q')
putchar(alphaBet);
}
return (0);
}
