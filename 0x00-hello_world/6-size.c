#include <stdio.h>
/**
 * main - entrypoint
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of char %d byte(s)\n size of int %d byte(s)\n size of long int %d byte(s)\n size of long long int %d byte(s)\n size of float %d byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
	return (0);
}
