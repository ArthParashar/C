#include <stdio.h>
int main()
{
   int n;
   char ch;
   do
   {
     printf("Enter a no.\n");
     scanf("%d",&n);
     if(n%2==0)
     printf("Even no.\n");
     else
     printf("Odd no.\n");
     printf("Do you want to continue?\n");
     scanf(" %c",&ch);
   }while (ch=='Y'||ch=='y');
   if(ch=='N'||ch=='n')
   printf("Exiting...");
}
