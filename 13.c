#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str[100];
  long sum=0;
  while (scanf("%s", str) != EOF) {
    str[12] = '\0';
    long tmp = strtol(str, NULL, 10);
    sum += tmp;
  }
  sprintf(str, "%ld", sum);
  str[10] = '\0';
  puts(str);
}
