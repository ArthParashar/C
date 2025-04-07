//p1
#include<stdio.h>
int main()
{  
   int r,c,s=0;
   printf("Enter the row and column of 2d array\n");
   scanf("%d %d",&r,&c);
   int a[r][c];
   int *ptr=&a[0][0];
   for(int i=0;i<r;i++)
   {
     for(int j=0;j<c;j++)
     {
        printf("Enter the element of array\n");
        scanf("%d",&a[i][j]);
     }
   }
   for(int i=0;i<r*c;i++)
   {
      s=s+*(ptr+i);
   }
   printf("Sum of all the elements is:%d\n",s);
}
