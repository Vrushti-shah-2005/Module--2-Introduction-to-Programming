#include <stdio.h>
//Define structure
struct Student 
{
    char name[50];
    int roll;
    float marks;
};
void main() 
{
    struct Student students[3]; // Array of 3 students
    int i;
    // Input details for 3 students
    for (i = 0; i < 3; i++) 
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Read full name with spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Display the student details
printf("----- Student Details -----\n");
for (i = 0; i < 3; i++) 
{
    printf("Student %d\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("Roll Number: %d\n", students[i].roll);
    printf("Marks: %.2f\n", students[i].marks);
    printf("-------------------------\n");
}

}
