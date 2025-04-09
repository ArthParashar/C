#include <stdio.h>




struct Student {
    char name[50];
    int age;
    int rollNo;
    float marks;
};

int main() {
    struct Student students[10];
    
    
    for (int i = 0; i < 10; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        gets(students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    
    printf("\nDetails of students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Roll Number: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}
