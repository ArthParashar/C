#include <stdio.h>
int main()
{
  char ch;
  printf("Enter an Alphabet \n");
  scanf("%c",&ch);
  if(ch=='a' || ch == 'e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch == 'E' || ch=='I' || ch=='O' || ch=='U')
  {
    ch=ch+1;
    printf("The next consonant is : %c \n",ch);
  }
  else
  {
    printf("%c is already a consonant \n",ch);
  }
}
