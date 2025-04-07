//p6
#include<stdio.h>
void vowelconsonant(char str[100])
{
  int vowelcount=0,consonantcount=0;
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
    {
       vowelcount++;
    }
    else if(str[i]>='A'&& str[i]<='Z' || str[i]>='a' && str[i]<='z')
    {
       consonantcount++;
    }
  }
  printf("No. of vowels is%d & consonants is %d\n",vowelcount,consonantcount);
}
void main()
{
  char str[100];
  puts("Enter string:\n");
  gets(str);
  vowelconsonant(str);
}
