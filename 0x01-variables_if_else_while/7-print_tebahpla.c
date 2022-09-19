#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	char alpha_reverse;

	alpha_reverse = 'z';

	while (alpha_reverse >= 'a')
	{
		putchar(alpha_reverse);
		alpha_reverse--;
	}
	putchar('\n');
	return (0);
}
