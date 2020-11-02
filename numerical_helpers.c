#include "holberton.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * IntegerToString - Converts an integer into an array of char
 * @number: the number to convert
 * @index: the value where we insert the value.
 */
void IntegerToString(int number, int *index)
{
	int digits = 1, j;
	long i;
	char digitToCopy;

	if (number < 0)
	{
		write(1, "-", 1);
		number = number * -1;
		*index = *index + 1;
	}

	for (i = 10; number / i > 0; i = i * 10)
	{
		digits++;
	}

	i = 0;

	for (j = 1; i < digits; i++, j++)
	{
		digitToCopy = (number / (GetDigit(10, digits, j)) % 10) + 48;
		write(1, &digitToCopy, 1);
		*index = *index + 1;
	}
}

/**
 * UnsignedIntegerToString - Converts an integer into an array of char
 * @number: the number to convert
 * @index: the value where we insert the value.
 */
void UnsignedIntegerToString(unsigned int number, int *index)
{
	int digits = 1, j;
	long i;
	char digitToCopy;

	for (i = 10; number / i > 0; i = i * 10)
	{
		digits++;
	}

	i = 0;

	for (j = 1; i < digits; i++, j++)
	{
		digitToCopy = (number / (GetDigit(10, digits, j)) % 10) + 48;
		write(1, &digitToCopy, 1);
		*index = *index + 1;
	}
}

/**
 * GetDigit - Gets the digit from Base string
 * @Base: the decimal base upon which calculate
 * @index: the actual digit.
 * @count: the count to put the cursor where it belongs
 * Return: the base digit to be calculated.
 */
int GetDigit(int Base, int index, int count)
{
	int i, theDigit = 1;
	int rebase;

	rebase = index - count;
	for (i = 0; i < rebase; i++)
	{
		theDigit = theDigit * Base;
	}
	return (theDigit);
}
