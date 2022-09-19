#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 success
 */
int main(void)
{
	int base_ten_num;

	base_ten_num = 0;

	while (base_ten_num < 10)
	{
		putchar((base_ten_num % 10) + '0');
		base_ten_num++;
	}

	putchar('\n');
	return (0);
}
