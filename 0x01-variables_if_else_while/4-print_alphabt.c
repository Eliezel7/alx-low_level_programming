#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
		if (b != 'q' && b != 'e')
			putchar(b);
	putchar('\n');
	return (0);
}
