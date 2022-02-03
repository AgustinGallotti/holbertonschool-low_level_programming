#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main() {
  char charType;
  int intType;
  double doubleType;
  float floatType;

  printf("Size of char: %zu bytes\n", sizeof(charType));
  printf("Size of int: %zu bytes\n", sizeof(intType));
  printf("Size of double: %zu bytes\n", sizeof(doubleType));
  printf("Size of float: %zu byte\n", sizeof(floatType));

  return 0;
}
