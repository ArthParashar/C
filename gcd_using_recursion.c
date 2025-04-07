// WAP to find the GCD of two numbers using recursion

#include<stdio.h>

int GCD(int x, int y);

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD = %d\n", GCD(a,b));
    return 0;
}

int GCD(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return GCD(y, x % y);
    }
}
