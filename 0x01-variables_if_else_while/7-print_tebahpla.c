#include <stdio.h>
/**
 * main - Entry point
 * print alphabet backwards
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 122; x >= 97; x--)
	{
		putchar(x);
	}
	putchar(10);
	return (0);
}
