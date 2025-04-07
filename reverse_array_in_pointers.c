//p5
#include<stdio.h>
int main()
{
  int n;
  printf("Enter no.of elements:\n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements:\n");
  for(int i=0;i<n;i++)
     scanf("%d",arr+i);
  printf("Using array name the array is:\n");
  for(int i=n-1;i>=0;i--)
     printf("%d ",*(arr+i));
  printf("\n");
  int *ptr=&arr[n-1];
  printf("Using pointer the array is:\n");
  for(int i=0;i<n;i++)
     printf("%d ",*(ptr-i));
  printf("\n");
}
