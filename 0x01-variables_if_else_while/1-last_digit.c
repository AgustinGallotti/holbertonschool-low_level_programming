#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry Point
*
* Return: 0 (Success)
*
*/
int main(void)
{
int n, lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
{
if (lastDigit n > 5)
{
printf("%d and is greater than 5"\n, n)
}
else if (lastDigit n == 0)
{
printf("%d and is 0"\n, n)
}
else (lastDigit n < 6; != 0)
{
printf("%d and is less tha 6 and not 0"\n, n)
}
