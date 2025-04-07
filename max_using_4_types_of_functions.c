//p2
#include<stdio.h>
int max3(int a,int b,int c)
{
  if(a>=b && a>=c)
   return a;
  else if(b>=a && b>=c)
   return b;
  else 
   return c;
}
void max1()
{
  int a,b,c,max;
  printf("Enter 3 numbers:");
  scanf("%d %d %d",&a,&b,&c);
  max=max3(a,b,c);
  printf("The maximum number is%d\n",max);
}
void max2(int a,int b,int c)
{
  int max=max3(a,b,c);
  printf("The maximum number is:%d\n",max);
}
int max4()
{
   int a,b,c,max;
   printf("Enter 3 numbers\n");
   scanf("%d %d %d",&a,&b,&c);
   max = max3(a,b,c);
   return max;
}
int main()
{
   printf("Type 1: Passing no arguments and without return value:\n");
   max1();
   printf("Type 2: Passing arguments and without return value:\n");
   int a2,b2,c2;
   printf("Enter 3 numbers\n");
   scanf("%d %d %d", &a2,&b2,&c2);
   max2(a2,b2,c2);
   printf("Type 3: Passing arguments and with return value:\n");
   int a3,b3,c3;
   printf("Enter 3 numbers\n");
   scanf("%d %d %d", &a3,&b3,&c3);
   int max_3=max3(a3,b3,c3);
   printf("The maximum number is%d\n", max_3);
   printf("Type 4: Passing no arguments and with return value:\n");
   int max_4= max4();
   printf("The maximum number is %d\n",max_4);
   return 0;  
}
