#include<stdio.h>
int main()
{
  int size,t;
  printf("Enter the size of array\n");
  scanf("%d",&size);
  int a[size];
  for(int i=0;i<size;i++)
  {
     printf("Enter elements of array\n");
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
  for(int i=0;i<size;i++)
  {
    printf("%d",a[i]);
  }
}
