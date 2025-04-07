#include <stdio.h>
int main()
{
  int lr,ur;
  printf("Enter upper range\n");
  scanf("%d",&ur);
  printf("Enter lower range\n");
  scanf("%d",&lr);
  int i=lr;
  while(i<=ur)
  {
    printf("%d \n",i);
    if(i%2==0)
    printf("%d is even\n",i);
    else
    printf("%d is odd\n",i);
    i++;
  }
}
