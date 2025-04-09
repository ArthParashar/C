#include<stdio.h>
int main()
{
   char str[100];
   char *ptr=str;
   printf("Enter a string:\n");
   gets(ptr);
   puts(ptr);
   return 0;
}
