//p5
#include<stdio.h>
void prime(int *arr,int n)
{
   int isprime=0;
   for(int i=0;i<n;i++)
   {
      if(arr[i]<=1)
      {
        continue;
      }
      isprime=0;
      for(int j=2;j<=arr[i]/2;j++)
      {
        if(arr[i]%j==0)
        {
           isprime=1;
           break;
        }
      }
      if(!isprime)
      {
         printf("%d",arr[i]);
      }
   }
}
void main()
{
  int n;
  printf("Enter no. of terms:\n");
  scanf("%d",&n);
  int arr[n];
  printf("Enter array elements:\n");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  prime(arr,n);
}
