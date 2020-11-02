#include "holberton.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * WriteString - Writes an array of char into the standard output.
 * @stringArray: An array of string to iterate and output.
 * @index: Pointer to the buffer output counter.
 */
void WriteString(char *stringArray, int *index)
{
	int i = 0;

	while (stringArray[i] != '\0')
	{
		write(1, &stringArray[i], 1);
		*index = *index + 1;
		i++;
	}
}

/**
 * WriteChar - Writes a single character into the standard output
 * @character: The char to write
 * @index: Pointer to the buffer output counter.
 */
void WriteChar(char character, int *index)
{
	write(1, &character, 1);
	*index = *index + 1;
}

/**
 * WriteAddress - Writes a memory address into the standard output.
 * @address: The Adress to convert into an hexadecimal value.
 * @index: Pointer to the buffer output counter.
 */
void WriteAddress(long address, int *index)
{
	WriteHexadecimal(address, 1, 1, index);
}
/**
 * WriteHexadecimal - Writes a long into a hexadecimal string.
 * @address: The hexadecimal to print.
 * @isUpperCase: If 1 prints Uppercase letters, if 0 print lower case.
 * @isMemoryAddress: if 1 print character that represents an addres,
 * if 0 prints just the hexadecimal value.
 * @index: Pointer to the buffer output counter.
 */
void WriteHexadecimal(long address, int isUpperCase,
					int isMemoryAddress, int *index)
{
	int mod;
	long int quotient;
	int i = 1, j, temp;
	char hexadecimalNumber[100];

	if (isUpperCase == 1)
	{
		mod = 55;
	}
	else
	{
		mod = 87;
	}
	quotient = address;
	while (quotient != 0)
	{
		temp = quotient % 16;
		if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp += mod;
		}
		hexadecimalNumber[i++] = temp;
		quotient = quotient / 16;
	}
	if (isMemoryAddress)
	{
		write(1, "0x", 2);
		*index = *index + 2;
	}

	for (j = i - 1; j > 0; j--)
	{
		WriteChar(hexadecimalNumber[j], index);
	}
}

/**
 * WriteOctal - Writes a long into a hexadecimal string.
 * @address: The hexadecimal to print.
 * @isuppercase: If 1 prints Uppercase letters, if 0 print lower case.
 * @index: Pointer to the buffer output counter.
 */
void WriteOctal(long address, int *index)
{
	int octalNum[100];
	int i = 0;
	int j = 0;

	while (address != 0)
	{
		octalNum[i] = address % 8;
		address = address / 8;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		WriteChar(octalNum[j] + '0', index);
	}
}
