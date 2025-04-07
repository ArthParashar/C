//p2.c
#include<stdio.h>
int main()
{
   int n;
   printf("Enter the size of array\n");
   scanf("%d",&n);
   int a[n];
   int *ptr=a;
   for(int i=0;i<n;i++)
   {
     printf("Enter elements of array:\n");
     scanf("%d",&a[i]);
   }
   printf("Using pointer\n");
   for(int i=0;i<n;i++)
   {
     if((*ptr+i)%2==0)
       printf("Array element at %d is even\n",i);
     else
       printf("Array element at %d is odd\n",i);
   }
   printf("Using array name:\n");
      for(int i=0;i<n;i++)
   {
     if((*a+i)%2==0)
       printf("Array element at %d is even\n",i);
     else
       printf("Array element at %d is odd\n",i);
   }
}
