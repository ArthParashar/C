//p4
#include<stdio.h>
int main()
{
   char str[100];
   char *p;
   int vc=0,vc2=0;
   printf("Enter the string:\n");
   fgets(str,100,stdin);
   p=str;
   printf("Using pointers\n");
   while(*p!='\0')
   {
     if(*p=='A' || *p=='E' || *p=='O' || *p=='I' || *p=='U' || *p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' )
       vc++;
     p++;
   }
   printf(" No. of vowels:%d\n",vc);
   int i=0;
   while(*str!='\0')
   {
     if(*str=='A' || *str=='E' || *str=='O' || *str=='I' || *str=='U' || *str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' )
       vc2++;
     *(str+i);
     i++;
   }
   printf("Number of vowels:%d\n",vc2); 
}
