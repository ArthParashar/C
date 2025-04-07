#include <stdio.h>
int main()
{
  int m,i=1,total=0;
  while(i<=5)
  {
    printf("Enter the marks of subject %d",i);
    scanf("%d",&m);
    total=total+m;
    switch(m/10)
    {
      case 10:
      printf("The obtained grade in subject %d is: O\n ",i);
      break;
      case 9:
      printf("The obtained grade in subject %d is: O\n ",i);
      break;
      case 8:
      printf("The obtained grade in subject %d is: E\n ",i);
      break;
      case 7:
      printf("The obtained grade in subject %d is: A\n ",i);
      break;
      case 6:
      printf("The obtained grade in subject %d is: B\n ",i);
      break;
      case 5:
      printf("The obtained grade in subject %d is: C\n ",i);
      break;
      case 4:
      printf("The obtained grade in subject %d is: D\n ",i);
      break;
      default:
      printf("The obtained grade in subject %d is: Fail\n ",i);
    }
    i++;
  }
  float cgpa=(total/5)/10;
  printf("The overall cgpa is: %f\n",cgpa);
}
