#include <stdio.h>
int main()
{
  int n,sum=0;
  printf("Enter a number");
  scanf("%d",&n);
  int i=1;
  while(i<=n)
  {
    sum=sum+(i*i);
    i++;
  }
  printf("Sum is: %d",sum);
}
