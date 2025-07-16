#include <stdio.h> // Include standard input/output header
#define PI 3.14 // Defining a constant using #define
void main() 
{
// Declare variables of different data types

int age = 20; // Integer variable

float marks = 85.75;char grade = 'A'; // Character variable

const int YEAR = 2025; // Constant using 'const' keyword

// Display the values using printf
printf("Student Details:\n");
printf("Age: %d years\n", age);
printf("Marks: %.2f\n", marks);
printf("Grade: %c\n", grade);
printf("Year: %d\n", YEAR);
printf("Value of PI: %.4f\n", PI);

}