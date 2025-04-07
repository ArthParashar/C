#include<stdio.h>
void main()
{
     float l,b,r,pr,pc,ar,ac;
     printf("Enter the length and width of rectangle and radius of circle \n");
     scanf("%f %f %f", &l,&b,&r);
     pr= 2*(l+b);
     pc= 2*3.14*r;
     ar= l*b;
     ac= 3.14*r*r;
     printf("The perimeter of the rectangle is: %f \n", pr );
     printf("The area of rectangle is: %f \n" , ar);
     printf("The perimeter of the circle is: %f \n", pc);
     printf("The area of circle is: %f \n", ac);
     }
