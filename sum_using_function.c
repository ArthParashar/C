//p3
#include<stdio.h>
int sum1(int num)
{
  int sum=0;
  while(num!=0)
  {
    sum+= num%10;
    num /= 10;
  }
  return sum;
}
void sum2(int num, int *sum)
{
   *sum=0;
   while(num!=0)
   {
     *sum+= num%10;
     num /= 10;
   }
}
int main()
{
  int n,sv,sr;
  printf("Enter number\n");
  scanf("%d",&n);
  sv=sum1(n);
  printf("Sum of digits using call by value:%d\n",sv);
  sum2(n,&sr);
  printf("Sum of digits using call bny reference%d\n",sr);
}
