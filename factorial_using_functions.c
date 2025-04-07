//p2
#include<stdio.h>
int fact1(int num)
{
  int fact=1;
  for(int i=1;i<=num;i++)
  {
      fact*=i;
  }
  return fact;  
}
void fact2(int num, int*fact)
{
  *fact =1;
  for(int i=1;i<=num;i++)
  {
    *fact*=i;
  }
}
int main()
{
  int n,fv,fr;
  printf("enter a number\n");
  scanf("%d",&n);
  fv= fact1(n);
  printf("factorial by call by value %d\n",fv);
  fact2(n,&fr);
  printf("Factorial by call by reference %d\n",fr);
  return 0;
}
