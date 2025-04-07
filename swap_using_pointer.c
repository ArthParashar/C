//p5.c
#include <stdio.h>
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swap: x = %d, y = %d\n", x, y);
    int *ptrX = &x;
    int *ptrY = &y;
    int t = *ptrX;
    *ptrX = *ptrY;
    *ptrY = t;
    printf("After swap: x = %d, y = %d\n", x, y);
}
