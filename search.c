#include<stdio.h>
int main()
{
  int size,find,j;
  printf("Enter size \n");
  scanf("%d",&size);
  int a[size];
  for(int i=0;i<size;i++)
  {
    printf("Enter value of array\n");
    scanf("%d",&a[i]);
  }
  printf("Enter number to be searched\n");
  scanf("%d",&find);
  for(j=0;j<size;j++)
  {
     if(a[j]==find)
     {
       printf("Number found at index %d\n",j);
       break;
     }
  }
  if(j>=size)
  printf("Number not found\n");
}
