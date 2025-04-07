#include<stdio.h>
int main()
{
  int years;
  float p_amt,r,total;
  printf("Enter principal amount\n");
  scanf("%f",&p_amt);
  printf("Enter annual rate:\n");
  scanf("%f",&r);
  printf("Enter time in years\n");
  scanf("%d",&years);
  float *p_amt_ptr=&p_amt;
  total=*p_amt_ptr;
  float *t_ptr=&total;
  for(int i=0;i<years;i++)
  {
     *t_ptr+=(r/100)*(*t_ptr);
  }
  printf("Final amount:%2f\n",total);
  printf("Total amount:%2f\n",total-*ptr_amt_ptr);
}
