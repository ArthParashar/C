//p3
#include <stdio.h>
int main() 
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    int *ptr = &arr[0][0];
    printf("Enter %d elements:\n", rows * cols);
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         {
            scanf("%d", (ptr + (i * cols) + j));
        }
    }
    printf("\nEven/Odd Check:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++)
         {
            if (*(ptr + (i * cols) + j) % 2 == 0)
                printf("Element %d at (%d, %d) is Even\n", *(ptr + (i * cols) + j), i, j);
            else
                printf("Element %d at (%d, %d) is Odd\n", *(ptr + (i * cols) + j), i, j);
        }
    }
}
