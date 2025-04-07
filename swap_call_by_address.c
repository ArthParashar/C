//p1
#include<stdio.h>
int swap(int *x, int *y)
{
  int t;
  t= *x;
  *x= *y;
  *y = t;
}
int main()
{
  int a,b;
  printf("Enter value of a & b:\n");
  scanf("%d %d", &a,&b);
  printf("Before swap:\n");
  printf("a=%d\n b=%d \n",a,b);
  swap(&a,&b);
  printf("After swap:\n");
  printf("a=%d\n b=%d \n",a,b);
  return 0;
}
