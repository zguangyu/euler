#include <stdio.h>

int main()
{
  long a[21][21];
  int i, j;
  for (i=0; i<21; i++) {
    for (j=0; j<21; j++) {
      if (i==0 && j==0)
	a[i][j] = 1;
      else if(i==0)
	a[i][j] = a[i][j-1];
      else if(j==0)
	a[i][j] = a[i-1][j];
      else
	a[i][j] = a[i-1][j] + a[i][j-1];
    }
  }
  printf("%lu\n", a[20][20]);
}
