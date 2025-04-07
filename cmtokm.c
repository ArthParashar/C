#include<stdio.h>
int main()
{
    int k,m,r,a;
    printf("Enter distance in centimeters \n");
    scanf("%d", &a);
    k= a/100000;
    r= a%100000;
    m= r/100;
    r= r%100;
    printf("%d km %d m %d cm \n",k,m,r);
    return 0;
}
