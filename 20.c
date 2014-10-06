#include <stdio.h>
#include <gmp.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  mpz_t n;
  int i;
  char *str=(char*)malloc(1024);
  int sum=0;
  mpz_init(n);
  mpz_set_si(n, 1);
  for (i=2; i<=100; i++)
    mpz_mul_si(n, n, i);
  mpz_get_str(str, 10, n);
  for (i=0; i<strlen(str); i++)
    sum += str[i]-'0';
  printf("%d\n", sum);
}
