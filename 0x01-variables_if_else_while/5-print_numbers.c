#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	int digit_char;

	for (digit_char = 0; digit_char < 10; digit_char++)
	{
		printf("%d", digit_char);
	}
	printf("\n");

	return (0);
}
