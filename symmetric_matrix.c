#include<stdio.h>
int main()
{
   int n,c=0;
   printf("Enter the size of array\n");
   scanf("%d",&n);
   int ar[n][n];
   printf("Enter the elements of matrix\n");
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         printf(" ");
         scanf("%d",&ar[i][j]);
      }
      printf("\n");
   }
   printf("Matrices is\n");
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
        printf("%d",ar[i][j]);
      }
      printf("\n");
   }
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
       if(ar[i][j]==ar[j][i])
       c++;
     }
   }
   if(c==(n*n))
   printf("Symmetric");
   else
   printf("Not symmetric");
}
