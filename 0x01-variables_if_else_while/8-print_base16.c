#include <stdio.h>
/**
 * main - Entry point
 * prints hexadecimal numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	char y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar(y);
	}
	putchar(10);
	return (0);
}
