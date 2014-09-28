#include <stdio.h>

int main()
{
  int i, j, sum=0;
  for(i=1; i<100; i++)
    for(j=i+1; j<=100; j++)
      sum += i*j;
  sum <<= 1;
  printf("%d\n", sum);
}
