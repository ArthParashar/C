#include<stdio.h>
int main()
{
   char str[100];
   printf("Enter a string:\n");
   fgets(str,100,stdin);
   int len=0,j=0;
   while(str[len]!='\0'&& str[len]!='\n')
   len++;
   char letters[100];
   for(int i=0;i<=len;i++)
   {
      if(str[i]==' ' || str[i]=='\0' || str[i]=='\n')
      {  
         letters[j]=str[i-1];
         j++;
      }
   }
   printf("The entered characters are: ");
   for(int i=0;letters[i]!='\0';i++)
   printf("%c",letters[i]);
   return 0;
}
