#include<stdio.h>
/**
 * main - A program that prints the alphabet in lowercase
 * Return: 0 (This indicates succesful)
 */
int main(void)
{
char letters[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(letters[i]);
}
puchar('\n');
return (0);
}
