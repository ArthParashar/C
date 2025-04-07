//p2
#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    int *ptr = &arr[0][0];
    printf("Enter the elements:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", (ptr + (i * cols) + j));
        }
    }
    printf("\nRow-wise Averages:\n");
    for (int i = 0; i < rows; i++) 
    {
        int sum = 0;
        for (int j = 0; j < cols; j++) 
        {
            sum =sum + *(ptr + (i * cols) + j);
        }
        float avg = (float)sum / cols;
        printf("Average of row %d: %.2f\n", i + 1, avg);
    }
}
