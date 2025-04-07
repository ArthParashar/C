#include <stdio.h>
int main()
{
   int n;
   int sum=0;
   printf("Enter a number\n");
   scanf("%d",&n);
   while(n!=0)
   {
     sum=sum+n%10;
     n=n/10;
   }
   printf("Sum is:%d\n",sum);
   if(sum%3==0 && sum%4==0)
   printf("Number is divisble by both 3 and 4\n");
   else 
   printf("Not divisble\n");
}
