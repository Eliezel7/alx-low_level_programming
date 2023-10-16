#include "main.h"

/**
 * _toi - Convert a string to an integer.
 * @s: The input string.
 *
 * Description: This function takes a string @s and converts it to an integer.
 * It returns the integer value of the input string.
 *
 * Return: The integer value of the input string @s.
 */

int _toi(char *s)

{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
	if (s[c] == 45)
	{
	min *= -1;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
	isi = 1;
	ni = (ni * 10)  + (s[c] - '0');
	c++;
	}
	if (isi == 1)
	{
	break;
	}
	c++;
	}
	ni *= min;
	return (ni);
}
