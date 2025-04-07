#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter two numbers \n");
  scanf("%d %d",&a,&b);
  printf("Enter 1 for addition, 2 for multiplication, 3 for substraction, 4 for divison, 5 for remainder/modulus \n ");
  scanf("%d", &c);
  if(c==1)
  {
    int d=a+b;
    printf("Addition is: %d",d);
  }
   else if(c==2)
  {
    int d=a*b;
     printf("Multiplication is: %d",d);
  }
   else if(c==3)
  {
    int d=a-b;
     printf("Substraction is: %d",d);
  }
   else if(c==4)
  {
    int d=a/b;
     printf("Divison is: %d",d);
  }
   else
  {
    int d=a%b;
     printf("Moduluis/Remainder is: %d",d);
  }
}
