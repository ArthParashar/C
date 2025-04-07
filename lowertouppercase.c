#include <stdio.h>
int main()
{
   char ch;
   printf("Enter an alphabet \n");
   scanf("%c", &ch);
   if(ch>=97 && ch<=122)
   {
      ch= ch-32;
      printf("The uppercase alphabet is: %c \n",ch);
   }
   else
   {
      printf("The alphabet is already in uppercase \n");
   }
   return 0;
}
