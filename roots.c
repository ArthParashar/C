#include <stdio.h>
#include <math.h>
int main()
{
   double a,b,c,r1,r2,d;
   printf("Enter the quadractic equation numbers");
   scanf("%lf %lf %lf", &a,&b,&c);
   d=b*b-4*a*c;
   printf("The quadratic equation is : %lfx^2+ %lfx + %lf \n", a,b,c);
   if(a==0)
   {
       printf("Roots doesn't exist %lf",a);
   }
   else
   {
   r1=(-b+sqrt(d))/(2*a);
   r2=(-b-sqrt(d))/(2*a);
   printf("The roots of the eqaution are: %lf %lf \n", r1,r2);
   }
   return 0;
}
