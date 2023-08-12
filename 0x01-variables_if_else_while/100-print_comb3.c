#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putcar(n);
				putcar(m);
				if (n != 56 || m != 57)
				{
					putcahr(',');
					putcahr(' ');
				}
			}
		}
	}
	putcahr('\n');
	return (0);
}
