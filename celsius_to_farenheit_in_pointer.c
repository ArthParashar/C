//p6.c
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the temperature in celsius:\n ");
    scanf("%d",&n);
    int *ptrN = &n;
    double far= (9*(*ptrN)/5)+32;
    printf("The temperature in farhenite is: %lf",far);
}
