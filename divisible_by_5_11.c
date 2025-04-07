#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number to be checked \n");
  scanf("%d",&n);
  if(n%5==0 && n%11==0)
  {
    printf("%d is divisble by both 5 and 11 \n",n);
  }
  else
  {
    printf("%d is not divisble by 5 and 11 \n",n);
  }
}
