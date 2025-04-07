/* WAP to create an array of 10 elements that store the roll no. of students. After some time new 5 students
are added in the class. Then create a dynamic array that can hold the roll no. of all the students & display
the roll no */

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *arr1 = (int *)calloc(10, sizeof(int));
    printf("Enter the roll numbers of 10 students: ");
    for (int i=0; i<10; i++){
        scanf("%d", &arr1[i]);
    }

    printf("5 More students are added.\n");
    printf("Enter roll numbers of 5 NEW Students: ");

    arr1 = (int *)realloc(arr1, 15 * sizeof(int));
    for (int i=10; i<15; i++){
        scanf("%d", &arr1[i]);
    }
    printf("The roll number of all students are:\n");
    for (int i=0; i<15; i++){
        printf("%d ", arr1[i]);
    }
    
    return 0;
}
