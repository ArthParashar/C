#include <stdio.h>
int main()
{
   int a[5]={1,2,3,4,5},sum=0;
   for(int i=0;i<5;i++)
   {
      sum=sum+a[i];
   }
   printf("The sum is %d\n",sum);
}
