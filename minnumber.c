#include <stdio.h>
int main()
{
   int a,b,c;
   printf("Enter three numbers \n");
   scanf("%d %d %d",&a,&b,&c);
   if(a<b && a<c)
   {
     printf("Min. number is : %d \n",a);
   }
   else if(b<c)
   {
     printf("Min. number is : %d \n",b);
   }
   else
   {
     printf("Min. no. is : %d \n",c);     
   }
   return 0;
}
