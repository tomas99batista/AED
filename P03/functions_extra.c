//
// Tomás Oliveira e Silva, AED, September 2018
//
// the functions for the extra exercises of class P.03
//

#include <stdio.h>

int g1(int n)
{
  int i,j,r = 0;

  for(i = 0;i <= n;i++)
    for(j = i;j >= 0;j--)
      r += i - j;
  return r;
}

int g2(int n)
{
  int i,j,r = 0;

  for(i = 0;i < 2 * n;i += 2)
    for(j = i;j <= 2 * n;j += 2)
      r += j;
  return r;
}

void g3(int n,int *a)
{
  for(int i = 1;i <= n;i++)
    for(int j = i;j <= n;j += i)
      a[j] = i;
}

int main(void)
{
  // place your code here
}
