#include<stdio.h>
int main()
{
   int size,index;
   printf("Enter the size of the array\n");
   scanf("%d",&size);
   int a[size];
   for(int i=0;i<size;i++)
   {
      printf("Enter the element of array\n");
      scanf("%d",&a[i]);
   }
   printf("Enter the index of the element to be deleted\n");
   scanf("%d",&index);
   if(index>=size+1)
   {
      printf("Deletion is not possible\n");
   }
   else
   {
      for(int i=index;i<size-1;i++)
      {
        a[i]=a[i+1];
      }
      printf("The array after deletion is\n");
      for(int i=0;i<size-1;i++)
      {
         printf("%d",a[i]);
      }
   }
}
