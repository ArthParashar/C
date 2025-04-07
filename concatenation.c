#include<stdio.h>
int main()
{
   char str1[50],str2[50];
   int length=0;
   printf("Enter the first string\n");
   gets(str1);
   printf("Enter the second string\n");
   gets(str2);
   while(str1[length]!='\0')
   {
      ++length;
   }
   str1[length]=' ';
   ++length;
   for(int j=0;str2[j]!='\0';++j,++length)
   {
      str1[length]=str2[j];
   }
   str1[length]='\0';
   printf("After concatenation:\n");
   puts(str1);
}
