
#include <stdio.h>
int main()
{
   int n,c=0;
   printf("Enter a no.\n");
   scanf("%d",&n);
   for(int i=2;i<=n/2;i++)
   {
      if(n%i==0)
      c++;
   }
   if(c==0)
   printf("Prime no.\n");
   else
   printf("Not prime\n");
}
