#include<stdio.h>
int main()
{
  int row,col;
  printf("Enter rows and column\n");
  scanf("%d %d",&row,&col);
  int a[row][col];
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      printf("Enter element for matrix 1\n");
      scanf("%d",&a[i][j]);
    }
  }
  int b[row][col];
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      printf("Enter element for matrix 2\n");
      scanf("%d",&b[i][j]);
    }
  }
  int c[row][col];
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
  }
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
    printf("%d ",c[i][j]);
    }
    printf("\n");
  }
}
