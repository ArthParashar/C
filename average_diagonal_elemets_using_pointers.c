//p4
#include <stdio.h>

int main()
 {
    int n;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);
    int arr[n][n];
    int *ptr = &arr[0][0];
    printf("Enter %d elements:\n", n * n);
    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++) 
        {
            scanf("%d", (ptr + (i * n) + j));
        }
    }
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
     {
        sum += *(ptr + (i * n) + i);
        count++;
    }
    float avg = (float)sum / count;
    printf("Average of diagonal elements: %.2f\n", avg);
}
