//p6
#include<stdio.h>
int main()
{
   char str1[200],str2[200];
   printf("Enter the string:\n");
   fgets(str1,200,stdin);
   int k=0;
   for(int i=0;*(str1+i)!='\0'&& *(str1+i)!='\n';i++)
   {
     *(str2+i)=*(str1+i);
     k++;
   }
   *(str2+k)='\0';
   char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
   char *ptr=str1;
   printf("Using pointer the modified array is:\n");
   for(int i=0;*(ptr+i)!='\0';i++)
   {
     for(int j=0;j<10;j++)
     {
       if(*(ptr+i)==vowels[j])
       {
         *(ptr+i)=*(ptr+i)+2;
       }
     }
     printf("%c",*(ptr+i));
   }
   printf("\nUsing string name the modified array is:\n");
   for(int i=0;*(str2+i)!='\0';i++)
   {
     for(int j=0;j<10;j++)
     {
       if(*(str2+i)==vowels[j])
       {
         *(str2+i)=*(str2+i)+2;
       }
     }
     printf("%c",*(str2+i));
   }
   printf("\n");
}
