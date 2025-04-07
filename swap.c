#include <stdio.h>
void main()
{
   int a,b,c;
   printf("Enter a value of a and b = \n");
   scanf("%d %d", &a,&b);
   c=a;
   a=b;
   b=c;
   printf("Swapped value of a=%d and b=%d", a,b);
}
