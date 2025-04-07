// WAP to create two dynamic integers, then swap the values after inserting the values dynamically

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *num1 = (int *)malloc(sizeof(int));
    int *num2 = (int *)malloc(sizeof(int));
    int temp;

    printf("Enter num1: ");
    scanf("%d", num1);

    printf("Enter num2: ");
    scanf("%d", num2);

    printf("Before swapping, num1 = %d , num2 = %d\n", *num1, *num2);

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("After swapping, num1 = %d , num2 = %d\n", *num1, *num2);

    return 0;
}
