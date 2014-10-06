#include <stdio.h>

int main()
{
  int i, j, a[100][100], b[100][100], max=0;
  for (i=0; i<100; i++) {
    for (j=0; j<=i; j++) {
      scanf("%d", &(a[i][j]));
    }
  }
  b[0][0] = a[0][0];
  for (i=1; i<100; i++) {
    for (j=0; j<=i; j++) {
      if (j==0)
	b[i][j] = b[i-1][j] + a[i][j];
      else if (j==i)
	b[i][j] = b[i-1][j-1] + a[i][j];
      else {
	b[i][j] = (b[i-1][j-1] > b[i-1][j] ? b[i-1][j-1] : b[i-1][j]) + a[i][j];
      }
    }
  }

  for (i=0; i<100; i++) {
    if (b[99][i] > max)
      max = b[99][i];
  }
  printf("%d\n", max);
}
