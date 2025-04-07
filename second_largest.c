#include<stdio.h>
int main()
{
  int n,l1=0,l2=0,t=0;
  printf("Enter the no. of elements of array");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter the elements of the array :\n");
    scanf("%d",&a[i]);
  }
  l1=a[0];
  l2=a[1];
  if(l2>l1)
  {
    t=l1;
    l1=l2;
    l2=t;
  }
  for(int i=2;i<n;i++)
  {
    if(a[i]>l1)
    {
       l2=l1;
       l1=a[i];
    }
    else if(a[i]>l2&&a[i]!=l2)
    {
      l2=a[i];
    }
  }
  printf("Secomd largest elemnt is %d \n",l2);
}
