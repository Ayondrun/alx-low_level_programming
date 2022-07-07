#include <stdio.h>

/**
 * main - Prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int b, bp;

	b = 612852475143;
	for (bp = 2; bp <= b; bp++)
	{
		if (b % bp == 0)
		{
			b /= bp;
			bp--;
		}
	}
	printf("%ld\n", bp);
	return (0);
}
