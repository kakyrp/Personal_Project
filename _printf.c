#include "holberton.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - Prints a value with formats and parameters into stdout
 * @format: original string with format parameters
 * Return: the size of the buffer.
 */
int _printf(const char *format, ...)
{
	int i = 0; /*Format Index*/
	va_list infiniteList;
	int index = 0;

	if (format != NULL)
	{
		va_start(infiniteList, format);
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				EvaluateFormat(format, i, &index, infiniteList);
				i++;
			}
			else
			{
				write(1, &format[i], 1);
				index++;
			}
			i++;
		}
		va_end(infiniteList);
	}
	else
	{
		return (ReturnNull());
	}
	return (index);
}
