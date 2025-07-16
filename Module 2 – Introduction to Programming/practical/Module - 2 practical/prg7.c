#include <stdio.h>
// Function Declaration
int factorial(int n);
void main() 
{
    int num;
    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    // Input validation
    if (num < 0) 
    {
        printf("Factorial is not defined for negative numbers.\n");
    } 
    else 
    {
        // Function Call
        int result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);
    }

}
// Function Definition
int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}