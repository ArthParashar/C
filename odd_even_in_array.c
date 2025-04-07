#include <stdio.h>
int main()
{
   int size;
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
     if(a[i]%2==0)
     printf("Number[%d]=%d is even\n",i,a[i]);
     else
     printf("Number[%d]=%d is odd\n",i,a[i]);
   }
}
