#include<stdio.h>
int main()
{
  int r,c,t;
  printf("Enter no. of rows for first matrix\n");
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
    {
      int t=a[i][j];
      a[i][j]=a[j][i];
      a[j][i]=t;
    }
  }
  printf("The transposed matrix is:\n");
  for(int i=0;i<c;i++)
  {
     for(int j=0;j<r;j++)
     {
       printf("%d",a[j][i]);
     }
     printf("\n");
  }
}
