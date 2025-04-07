#include<stdio.h>
int main()
{
   int size,n,pos;
   printf("Enter size\n");
   scanf("%d",&size);
   int a[size+1];
   for(int i=0;i<size;i++)
   {
     printf("Enter the elements\n");
     scanf("%d",&a[i]);
   }
   printf("Enter the index\n");
   scanf("%d",&pos);
   printf("Enter the number to be inserted\n");
   scanf("%d",&n);
   if(pos>size+1 || pos<0)
   {
     printf("Invalid position");
   }
   else
   {
   for(int i=size+1;i>=pos;i--)
   {
     a[i]=a[i-1];
   }
   a[pos]=n;
   size++;
   printf("Array elements after insertion\n");
   for(int i=0;i<size;i++)
   {
      printf("%d ",a[i]);
   }
   }
}
