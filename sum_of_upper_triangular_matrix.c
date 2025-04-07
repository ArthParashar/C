#include<stdio.h>
int main()
{
  int r,c,sum=0;
  printf("Enter no. of rows for matrix\n");
  scanf("%d",&r);
  printf("Enter no. of columns for matrix\n");
  scanf("%d",&c);
  int a[r][c];
  printf("Enter the matrix\n");
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    if(i<j)
    sum=sum+a[i][j];
  }
  printf("Sum is: %d\n",sum);
}
