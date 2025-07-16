#include <stdio.h>
void main() 
{
    int num = 10; // Declare an integer variable
    int *ptr; // Declare a pointer to int
    ptr = &num; // Pointer stores the address of num
    // Display original value and address
    printf("Original value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Pointer ptr points to address: %p\n", ptr);
    printf("Value at ptr (i.e., *ptr): %d\n", *ptr);
    // Modify value using pointer
    *ptr = 25;
    // Display modified value
    printf("\nAfter modifying value using pointer:\n");
    printf("New value of num: %d\n", num);
    printf("Value at ptr (i.e., *ptr): %d\n", *ptr);

}