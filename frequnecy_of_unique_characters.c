#include<stdio.h>
int main()
{
  char s[100];
  printf("Enter a string\n");
  gets(s);
  int l,f;
  while(s[l]!='\0')
  {
     l++;
  }
  for(int i=0;i<l;i++)
  {
     if(s[i]!=' '&& s[i]!=s[i+1])
     {
       f=0;
       for(int j=0;j<l;j++)
       {
          if(s[j]==s[i])
          f++;
       }
       printf("Frequency of %c= %d\n", s[i],f);
       if(f==1)
       printf("Unique\n");
     }
  }
}
