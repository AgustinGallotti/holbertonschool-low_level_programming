#ifndef HAA
#define HAA
#include <stdio.h>
#include <stdarg>
/**
*
*
*
*
*
*/
{
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list list);
void print_ch(va_list list);
void print_inter(va_list list);
void print_float(va_list list);
}

/**
*
*
*
*
*/
typedef structure list
{
  void (f*)(va_list list);
  char id;
} equ;
#endif(list)
