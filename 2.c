#include <stdio.h>

int main()
{
  int a=1, b=2, tmp, sum=0;
  while (b < 4000000) {
    if (b%2 == 0)
      sum += b;
    tmp = b;
    b = a+b;
    a = tmp;
  }
  printf("%d\n", sum);
}
