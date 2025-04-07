#include <stdio.h>
int main()
{
   int size,x,mid,t;
   printf("Enter size for array\n");
   scanf("%d",&size);
   int a[size];
   for(int i=0;i<size;i++)
   {
       printf("Enter the element\n");
       scanf("%d",&a[i]);
   }
    for(int i=0;i<size-1;i++)
  {
    for(int j=0;j<size-1;j++)
    {
       if(a[j]>a[j+1])
       {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
       }
    }
  }
  printf("Enter value to be searched\n");
  scanf("%d",&x);
  int low=0;
  int high=size-1;
  while(low<=high)
  {
  mid=(low+high)/2;
  if(a[mid]==x)
  {
    printf("Element found at index %d\n",mid);
    return 0;
  }
   if(a[mid]<x)
   low=mid+1;
   else
   high =mid-1;
   }
   printf("Elements is not present in array\n");
}
