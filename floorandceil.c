#include <stdio.h>
int main()
{
   double n,floor,ceil;
   printf("Enter a real no.\n");
   scanf("%lf", &n);
   int f=(int)n;
   int c=f+1;
   floor=(double)f;
   ceil=(double)c;
   printf("The floor value is: %lf and ceil value is %lf \n", floor,ceil);
   return 0;
}
