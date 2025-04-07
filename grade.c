#include <stdio.h>
int main()
{
  int m1,m2,m3,m4,m5;
  printf("Enter the total marks of subject 1 \n");
  scanf("%d",&m1);
  printf("Enter the total marks of subject 2 \n");
  scanf("%d",&m2);
  printf("Enter the total marks of subject 3 \n");
  scanf("%d",&m3);
  printf("Enter the total marks of subject 4 \n");
  scanf("%d",&m4);
  printf("Enter the total marks of subject 5 \n");
  scanf("%d",&m5);
  double avg=(m1+m2+m3+m4+m5)/5;
  if(avg>=90)
  {
     printf("Grade : O \n");
  }
   else if(avg>=80)
  {
     printf("Grade : E \n");
  }
    else if(avg>=70)
  {
     printf("Grade : A \n");
  }
    else if(avg>=60)
  {
     printf("Grade : B \n");
  }
    else if(avg>=50)
  {
     printf("Grade : C \n");
  }
    else if(avg>=40)
  {
     printf("Grade : D \n");
  }
    else
  {
     printf("Grade : Fail \n");
  }
  double cgpa=avg/10;
  printf("CGPA is : %lf", cgpa);
}
