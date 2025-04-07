#include<stdio.h>
int main()
{
  int row,col;
  float sum=0;
  printf("Enter rows and column\n");
  scanf("%d %d",&row,&col);
  int a[row][col];
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
      printf("Enter element\n");
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
       if(i==j)
       sum=sum+a[i][j];
    }
  }
  double avg=sum/row;
  printf("Average of digonal elements is: %0.2lf\n",avg);
}
