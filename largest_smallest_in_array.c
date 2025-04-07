#include<stdio.h>
int main()
{
  int size,min,max;
  printf("Enter size \n");
  scanf("%d",&size);
  int a[size];
  for(int i=0;i<size;i++)
  {
    printf("Enter value of array\n");
    scanf("%d",&a[i]);
  }
  max=a[0];
  for(int j=0;j<size;j++)
  {
   if(a[j]>max)
     max=a[j];
  }
  printf("Largest number is: %d\n",max);
  min=a[0];
  for(int j=0;j<size;j++)
  {
   if(a[j]<min)
     min=a[j];
  }
  printf("Smallest number is: %d\n",min);
}
