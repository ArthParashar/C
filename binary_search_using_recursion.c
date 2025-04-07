// WAP to implement Binary Search using recursion

#include<stdio.h>

int binarySearch(int array[], int low, int high, int target);

int main(){
    int n, x, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter Sorted Array: ");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter target value: ");
    scanf("%d", &x);
    result = binarySearch(arr, 0, n, x);
    if (result == -1){
        printf("Element not found\n");
    }
    else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}

int binarySearch(int array[], int low, int high, int target){
    if (low<=high){
        int mid = (low + high)/2;
        if (array[mid]==target){
            return mid;
        }
        if (array[mid] < target){
            return binarySearch(array, mid+1, high, target);
        }
        else {
            return binarySearch(array, low, mid-1, target);
        }
    }
    return -1;
}
