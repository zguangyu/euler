#include <stdio.h>

int main()
{
  long num=600851475143;
  long i;
  for (i=2; i<num/2; i++) {
    while(num%i == 0) num /= i;
  }
  printf("%ld\n", num);
}
