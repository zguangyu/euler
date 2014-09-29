#include <stdio.h>

int main()
{
  long sum = 0;
  int primes[200000];
  int nprimes = 0;
  int i, j;
  primes[nprimes++] = 2;
  for (i=3; i<2000000; i++) {
    for (j=0; j<nprimes; j++)
      if (i % primes[j] == 0)
	break;
    if (j == nprimes)
      primes[nprimes++] = i;
  }

  for (i=0; i<nprimes; i++)
    sum += primes[i];
  printf("%ld\n", sum);
}
