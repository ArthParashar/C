#include <stdio.h>
int main()
{
   int size,c,p=0;
   printf("Enter size\n");
   scanf("%d",&size);
   int a[size];
   for(int i=0;i<size;i++)
   {
     printf("Enter numbers for array\n");
     scanf("%d",&a[i]);
   }
   for(int i=0;i<size;i++)
   {
     c=0;
     for(int j=2;j<=a[i]/2;j++)
     {
       if(a[i]%j==0)
       c++;
     }
     if(c==0)
     {
     printf("Number[%d]=%d is prime no.\n",i,a[i]);
     p++;
     }
     else
     printf("Number[%d]=%d is not a prime no.\n",i,a[i]);
   }
}
