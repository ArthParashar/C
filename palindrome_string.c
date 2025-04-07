#include<stdio.h>
int main()
{
   char str[50];
   int len=0,flag=0;
   printf("Enter a string\n");
   scanf("%s",str);
   while(str[len]!='\0')
   {
     ++len;
   }
   for(int i=0;i<len/2;i++)
   {
   if(str[i]!=str[len-i-1])
   {
     flag=1;
     break;
   }
   }
   if(flag)
   printf("%s is not palindrome\n",str);
   else
   printf("%s is palindrome\n",str);
}
