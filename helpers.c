#include "holberton.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * ReturnNull - Writes to the standard output a null value as string.
 * Return: the size of the buffer
*/
int ReturnNull(void)
{
	write(1, "(null)", 6);
	return (6);
}

/**
 * CalculateMemoryAssignment - Calculates the number of
 * bytes of an array of string
 * @stringArray: the array of char to calculate the size of.
 * Return: returns the size of the array
 */
int CalculateMemoryAssignment(const char *stringArray)
{
	int i = 0; /*Index to iterate over the array*/

	while (stringArray[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * WriteToOutput - Writes to the standard output and returns the buffer size
 * @stringArray: the string to write to the buffer.
 * Return: the buffer size.
 */
int WriteToOutput(char *stringArray)
{
	int i = 0; /*Index to iterate over the array*/

	while (stringArray[i] != '\0')
	{
		i++;
	}
	write(1, stringArray, i);
	free(stringArray);
	return (i);
}

/**
 * CopyArrayString - Copies an string array into a new string array.
 * @stringArray: The original array to iterate through.
 * @copiedString: The copied array of char.
 **/
void CopyArrayString(const char *stringArray, char *copiedString)
{
	int i = 0; /*Index to iterate over the array*/

	while (stringArray[i] != '\0')
	{
		copiedString[i] = stringArray[i];
		i++;
	}
}
