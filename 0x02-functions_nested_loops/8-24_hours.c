#include <stdio.h>
#include <time.h>

int main(void)
{
time_t t = time(NULL);
struct tm tm = *localtime(&t);
_putchar("now: %d-%02d-%02d %02d:%02d:%02d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
}
