#include <stdio.h>
/**
 * main -Entry point
 * print numbers 1 to 10
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	putchar(10);
	return (0);
}
