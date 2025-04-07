/* WAP to create a dynamic array that can hold 20 integer elements then find out the max & min value
from that array. Use both malloc()and calloc() function */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int max, min;

    int *arr1 = (int *)malloc(20 * sizeof(int));

    printf("Enter 20 elements for malloc array:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr1[i]);
    }

    max = min = arr1[0];
    for (int i = 1; i < 20; i++) {
        if (arr1[i] > max)
            max = arr1[i];
        if (arr1[i] < min)
            min = arr1[i];
    }

    printf("\nMalloc Array - Max: %d, Min: %d\n", max, min);

   
    int *arr2 = (int *)calloc(20, sizeof(int));

    printf("\nEnter 20 elements for calloc array:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &arr2[i]);
    }

    max = min = arr2[0];
    for (int i = 1; i < 20; i++) {
        if (arr2[i] > max)
            max = arr2[i];
        if (arr2[i] < min)
            min = arr2[i];
    }

    printf("\nCalloc Array - Max: %d, Min: %d\n", max, min);

    free(arr1);
    free(arr2);

    return 0;
}
