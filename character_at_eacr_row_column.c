#include<stdio.h>
int main()
{
   char a[5][10]={"Java","Python","C","C++","R"};
   int r=5;
   int col=10;
   for(int i=0;i<r;i++)
   {
     for(int j=0;a[i][j]!='\0'&& j<col;j++)
     {
        printf("Character at row=%d and column=%d is : %c\n",i,j,a[i][j]);
     }
   }
}
