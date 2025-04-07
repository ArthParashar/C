//p3
#include<stdio.h>
void prime2(int a,int b)
{
  printf("The prime numbers are:\n");
  for(int i=a;i<=b;i++)
  {
    if(i<=1)
      continue;
    int prime=1;
    for(int j=2;j<i;j++)
    {
       if(i%j==0)
       {
         prime=0;
         break;
       }
    }
    if(prime == 1)
       printf("%d ",i);
  }
  printf("\n");
}
void prime1()
{
  int a,b;
  printf("Enter the lower and upper limits\n");
  scanf("%d %d",&a,&b);
  prime2(a,b);
}
int main()
{
  printf("Type 1: Passing no value and without return value\n");
  prime1();
  printf("Type 2: Passing arguments and without return value\n");
  int a,b;
  printf("Enter the lower and upper limits\n");
  scanf("%d %d",&a,&b);
  prime2(a,b);
}
