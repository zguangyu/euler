#include <stdio.h>

int is_pythangorean(int a, int b, int c)
{
  if (a*a+b*b == c*c)
    return 1;
  return 0;
}

int main()
{
  int a, b;
  for (a=1; a<1000; a++)
    for (b=a; b<1000; b++)
      if (is_pythangorean(a, b, 1000-a-b))
	goto out;
 out:
  printf("%d %d %d %d\n", a, b, 1000-a-b, a*b*(1000-a-b));
}
