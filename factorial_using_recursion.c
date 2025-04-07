// WAP to find out the factorial of a number using recursion

#include<stdio.h>

double factorial(int n);

int main(){
    int num;
    double fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = factorial(num);
    printf("The factorial is %.0lf\n", fact);
    return 0;
}

double factorial(int n){
    if (n==1)
        return 1;
    else
        return n * factorial(n-1);
}
