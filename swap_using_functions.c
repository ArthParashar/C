//p1
#include<stdio.h>
int num1,num2;
void swapbyvalue(int a,int b)
{
   int temp=a;
   a=b;
   b=temp;
   printf("After swap by value: num1=%d num2=%d\n",a,b);
}
void swapwithoutarg()
{ 
  int temp=num1;
  num1=num2;
  num2=temp;
}
int main()
{
   printf("Enter two numbers: ");
   scanf("%d %d",&num1,&num2);
   printf("\nBefore swap by value: num1=%d num2=%d\n",num1,num2);
   swapbyvalue(num1,num2);
   printf("\nBefore swapwithourarg: num1=%d num2=%d\n",num1,num2);
   swapwithoutarg();
   printf("After swap1: num1=%d num2=%d\n",num1,num2);
}
