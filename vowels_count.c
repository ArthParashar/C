#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str,100,stdin);
    int len=0,vowels=0;
    while(str[len]!='\0'&& str[len]!='\n')
    len++;
    for(int i=0;i<len;i++)
    {
      if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='o' ||  str[i]=='U' || str[i]=='u')
      {
         vowels=vowels+1;
         str[i]=str[i]+3;
      }
    }
    printf("Vowels count:%d\n",vowels);
    printf("Modififed string:%s",str);
}
