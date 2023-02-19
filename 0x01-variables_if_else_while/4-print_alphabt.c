#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase,
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
char chr = 'a';
while (chr <= 'z')
{
if (chr != 'e' && chr != 'q')
{
putchar(chr);
}
chr++;
}
putchar('\n');
return (0);
}
