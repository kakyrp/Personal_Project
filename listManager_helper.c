#include "holberton.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * EvaluateFormat - Evaluates the format to extract the variable from.
 * @formatString: the format instantatiner.
 * @index: The index of where the string leads.
 * @count: The output buffer counter.
 * @infiniteList: List of arguments.
 */
void EvaluateFormat(const char *formatString, int index,
						int *count, va_list infiniteList)
{
	switch (formatString[index + 1])
	{
	case '%':
		WriteChar('%', count);
		break;
	case 'i':
		IntegerToString(va_arg(infiniteList, int), count);
		break;
	case 'd':
		IntegerToString(va_arg(infiniteList, int), count);
		break;
	case 'u':
		UnsignedIntegerToString(va_arg(infiniteList, unsigned int), count);
		break;
	case 's':
		WriteString(va_arg(infiniteList, char *), count);
		break;
	case 'c':
		WriteChar(va_arg(infiniteList, int), count);
		break;
	case 'p':
		WriteAddress(va_arg(infiniteList, long), count);
		break;
	case 'x':
		WriteHexadecimal(va_arg(infiniteList, long), 0, 0, count);
		break;
	case 'X':
		WriteHexadecimal(va_arg(infiniteList, long), 1, 0, count);
		break;
	case 'o':
		WriteOctal(va_arg(infiniteList, long), count);
		break;
	default:
		WriteChar(formatString[index], count);
		WriteChar(formatString[index + 1], count);
		break;
	}
}
