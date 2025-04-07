#include<stdio.h>
int main()
{
  int size;
  printf("Enter size \n");
  scanf("%d",&size);
  int a[size];
  for(int i=0;i<size;i++)
  {
    printf("Enter value of array\n");
    scanf("%d",&a[i]);
  }
  int i1,i2;
  printf("Enter indices to be swapped\n");
  scanf("%d %d",&i1,&i2);
  int t;
  t=a[i1];
  a[i1]=a[i2];
  a[i2]=t;
  for(int i=0;i<size;i++)
  {
    printf("%d",a[i]);
  }
}
