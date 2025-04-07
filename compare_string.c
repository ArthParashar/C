#include<stdio.h>
int main()
{
  char s[100];
  char p[100];
  printf("Enter both strings\n");
  scanf("%s ",s);
  scanf(" %s",p);
  int l1=0,l2=0,i=0;
  while(s[l1]!='\0')
  l1++;
  while(p[l2]!='\0')
  l2++;
  if(l1!=l2)
  {
    printf("Not equal\n");
  }
  else
  {
  for(i=0;i<l1;i++)
  {
    if(s[i]!=p[i])
    break;
  }
  if(i==l1)
  printf("Equal\n");
  else
  printf("Not equal\n");
  }
}
