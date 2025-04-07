#include<stdio.h>
int main()
{
   int n;
   printf("Enter no. of strings\n");
   scanf("%d",&n);
   char str[n][100];
   printf("enter the strings:\n");
   for(int i=0;i<n;i++)
   {
      scanf("%s",str[i]);
   }
   char first,last;
   for(int i=0;i<n;i++)
   {
      first=str[i][0];
      for(int j=0;j<100;j++)
      {
         if(str[i][j]=='\0')
         {
            last=str[i][j-1];
            break;
         }
      }
      printf("First:%c, last:%c\n",first,last);
   }
}
   
