#include <stdio.h>
int main()
{
   int r;
   printf("Enter the no. of rows:\n");
   scanf("%d",&r);
   for(int i=1;i<=r;i++)
   {
     for(int j=1;j<=r-i;j++)
     {
       printf(" ");
     }
     for(int k=1;k<=i;k++)
     {
       printf("*");
     }
     printf("\n");
   }
}
