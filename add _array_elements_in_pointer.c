//p1
#include<stdio.h>
int main()
{
   int n,s1=0,s2=0;
   printf("Enter the size of array\n");
   scanf("%d",&n);
   int a[n];
   int *ptr=a;
   printf("Additon using pointer\n");
   for(int i=0;i<n;i++)
   {
     printf("Enter elements of array:\n");
     scanf("%d",&a[i]);
     s1=s1+*(ptr+i);
   }
   printf("Sum is %d",s1);
   for(int i=0;i<n;i++)
   {
     s2=s2+*(a+i);
   }
   printf("\nSum with array name is:%d",s2);
}
