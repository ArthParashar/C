#include<stdio.h>
int main()
{
   char s[100];
   printf("enter a string\n");
   gets(s);
   int l1=0,l2=0;
   while(s[l1]!='\0')
   l1++;
   for(int i=0;i<=l1;i++)
   {
     if(s[i]==' ')
     {
       for(int j=i;j<l1;j++)
       s[j]=s[j+1];
     }
   }
   while(s[l2]!='\0')
   l2++;
   printf("String with no space=\n%s\n",s);
   printf("Total no. of words=%d\n",l2);
}
