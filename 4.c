#include <stdio.h>
#include <string.h>

int check_palindrome(int num)
{
  char str[10];
  int len, i;
  sprintf(str, "%d", num);
  len = strlen(str);
  for (i=0; i<len/2; i++) {
    if (str[i] != str[len-i-1])
      return 0;
  }
  return 1;
}

int main()
{
  int i, j, max=0;
  for (i=999; i>=100; i--)
    for (j=i; j>=100; j--)
      if (check_palindrome(i*j))
	if (max < i*j)
	  max = i*j;
 out:
  printf("%d\n", max);
}
