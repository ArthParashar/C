#include <stdio.h>
int main()
{
  int n;
  printf("Enter day number \n");
  scanf("%d",&n);
  if(n==1)
  { 
    printf("Day is Monday\n");
  }
   else if(n==2)
  { 
    printf("Day is Tuesday\n");
  }
  else if(n==3)
  { 
    printf("Day is Wednesday\n");
  }
  else if(n==4)
  { 
    printf("Day is Thursday\n");
  }
  else if(n==5)
  { 
    printf("Day is Friday\n");
  }
  else if(n==6)
  { 
    printf("Day is Saturday \n");
  }
  else if(n==7)
  { 
    printf("Day is Sunday \n");
  }
  else
  {
    printf("Invalid input");
  }
}
