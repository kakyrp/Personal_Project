#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int ReturnNull();
int CalculateMemoryAssignment(const char *format);
int WriteToOutput(char *stringArray);
void CopyArrayString(const char *stringArray, char *copiedString);
void EvaluateFormat(const char *formatString,int index, int *count, va_list infiniteList);
void IntegerToString(int number, int *index);
void UnsignedIntegerToString(unsigned int number, int *index);
int GetDigit(int Base, int index, int count);
void WriteString(char *stringArray, int *index);
void WriteChar(char character, int *index);
void WriteAddress(long address, int *index);
void WriteHexadecimal(long address, int isUpperCase, int isMemoryAddress, int *index);
void WriteOctal(long address, int *index);

#endif