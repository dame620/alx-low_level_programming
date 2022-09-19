#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 success
 */
int main(void)
{
	char first_chars;
	int first_digit;

	first_chars = 'a';

	for (first_digit = 0; first_digit < 10; first_digit++)
	{
		putchar((first_digit % 10) + '0');
	}
	while (first_chars <= 'f')
	{
		putchar(first_chars);
		first_chars++;
	}
	putchar('\n');
	return (0);
}
