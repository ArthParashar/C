//p5
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
    printf("\nPrime numbers in the array:\n");
    for (int i = 0; i < rows; i++)
     {
        for (int j = 0; j < cols; j++)
         {
            int num = *(ptr + (i * cols) + j);
            int isPrime = 1;
            if (num < 2)
             {
                isPrime = 0;
            } 
            else
             {
                for (int k = 2; k * k <= num; k++)
                 {
                    if (num % k == 0)
                     {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if (isPrime)
             {
                printf("%d at position (%d, %d)\n", num, i, j);
            }
        }
    }
}
