#include<stdio.h>
int main()
{
  int r,c,i,j;
  printf("Enter no. of rows for first and second matrix\n");
  scanf("%d",&r);
  printf("Enter no. of columns for first matrix\n");
  scanf("%d",&c);
  int a[r][c];
  int b[r][c];
  printf("Enter the first matrix\n");
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
       scanf("%d",&a[i][j]);
       }
  }
  printf("Enter the second matrix\n");
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
       scanf("%d",&b[i][j]);
    }
  }
  printf("Mutilplication of matrix=\n");
  int mu[r][c];
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
       mu[i][j]=0;
       for(int k=0;k<c;k++)
       {
         mu[i][j]=mu[i][j]+a[i][k]*b[k][j];
       }
    }
  }
  for(int i=0;i<r;i++)
  {
    for(int j=0;j<c;j++)
    {
      printf("%d\t",mu[i][j]);
    }
    printf("\n");
  }
}
