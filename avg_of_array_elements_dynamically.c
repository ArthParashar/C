/* WAP to create a dynamic array of 10 float values with malloc, calloc, then find the average of
those values. Finally delete the whole memory*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float sum=0, avg;

    int *arr1 = (int *)malloc(20 * sizeof(int));

    printf("Enter 10 elements for malloc array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < 10; i++) {
        sum += arr1[i];
    }
    avg = sum/10;
    printf("\nMalloc Array - Average = %.2f\n", avg);

   
    int *arr2 = (int *)calloc(20, sizeof(int));
    sum = 0;
    printf("Enter 10 elements for malloc array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < 10; i++) {
        sum += arr2[i];
    }
    avg = sum/10;
    printf("\nMalloc Array - Average = %.2f\n", avg);

    free(arr1);
    free(arr2);

    return 0;
}
