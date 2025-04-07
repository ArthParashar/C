#include <stdio.h>
int main()
{
  int n,t,sum=0,r;
  printf("Enter a no.\n");
  scanf("%d",&n);
  t=n;
  while(n>0)
  {
    r=n%10;
    sum=sum+(r*r*r);
    n=n/10;
  }
  if(t==sum)
  printf("Armstrong no.\n");
  else
  printf("Not armstrong\n");
}
