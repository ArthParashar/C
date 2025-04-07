// WAP to find the sum of natural numbers using recursion

#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter no. of natural numbers: ");
    scanf("%d", &n);
    printf("Sum of %d natural nos. is %d\n", n, sum(n));
    return 0;
}

int sum(int n){
    if (n == 1)
        return 1;
    else
        return n + sum(n-1);
}
