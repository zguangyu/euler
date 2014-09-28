#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
  int i;
  if (n==2) return 1;
  if (n<2) return 0;
  for (i=2; i<=n/2; i++) {
    if (n%i == 0)
      return 0;
  }
  return 1;
}

int main()
{
  int primes[20];
  int nprimes=0;
  int tmp;
  int i;
  long res=1;

  /* find primes */
  for (i=2; i<=20; i++) {
    if (is_prime(i)) {
      primes[nprimes]=i;
      nprimes++;
    }
  }
  
  for (i=0; i<nprimes; i++) {
    tmp = 1;
    while(pow(primes[i], tmp) < 20) tmp++;
    tmp--;
    res *= pow(primes[i], tmp);
  }

  printf("%ld\n", res);
}
