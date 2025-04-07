#include <stdio.h>
int main()
{
   int s;
   printf("Enter basic salary\n");
   scanf("%d",&s);
   if(s<=10000)
   {
     double hra=0.2*s;
     double da=0.8*s;
     double gs=s+hra+da;
     printf("HRA is: %lf\n",hra);
     printf("DA is: %lf\n",da);
     printf("Gross salary is: %lf\n",gs);
   }
    else if(s<=20000)
   {
     double hra=0.25*s;
     double da=0.9*s;
     double gs=s+hra+da;
     printf("HRA is: %lf\n",hra);
     printf("DA is: %lf\n",da);
     printf("Gross salary is: %lf\n",gs);
   }
    else
   {
     double hra=0.3*s;
     double da=0.95*s;
     double gs=s+hra+da;
     printf("HRA is: %lf\n",hra);
     printf("DA is: %lf\n",da);
     printf("Gross salary is: %lf\n",gs);
   }
}
