#include <stdio.h>
/**
 * main - Entry point
 * print upper and lower case alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	char y;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}
	for (y = 65; y <= 90; y++)
	{
		putchar(y);
	}
	putchar(10);
	return (0);
}
