#include <stdio.h>
void main() 
{
int a, b;

// Accept input from user
printf("Enter first integer (a): ");
scanf("%d", &a);printf("Enter second integer (b): ");
scanf("%d", &b);

// Arithmetic operations
printf("\n--- Arithmetic Operations ---\n");
printf("a + b = %d\n", a + b);
printf("a - b = %d\n", a - b);
printf("a * b = %d\n", a * b);

if (b != 0) {
printf("a / b = %d\n", a / b);
printf("a %% b = %d\n", a % b); // %% is used to print %
} 
else 
{
printf("Division and modulus by zero is not allowed.\n");
}

// Relational operations
printf("\n--- Relational Operations ---\n");
printf("a == b: %d\n", a == b);
printf("a != b: %d\n", a != b);
printf("a > b : %d\n", a > b);
printf("a < b : %d\n", a < b);
printf("a >= b: %d\n", a >= b);printf("a <= b: %d\n", a <= b);

// Logical operations
printf("\n--- Logical Operations ---\n");
printf("(a && b) : %d\n", (a && b));
printf("(a || b) : %d\n", (a || b));
printf("!(a) : %d\n", !a);
printf("!(b) : %d\n", !b);

}