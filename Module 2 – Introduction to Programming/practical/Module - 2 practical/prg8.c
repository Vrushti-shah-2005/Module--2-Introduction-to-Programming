//One-Dimensional Array (1D)
#include <stdio.h>
void main() 
{
    int arr[5]; // 1D array to store 5 integers
    // Input values into the array
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    // Print the valuesprintf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

//Two-Dimensional Array (3x3 Matrix) + Sum Calculation
#include <stdio.h>
void main() 
{
    int matrix[3][3]; // 2D array (3x3 matrix)
    int sum = 0;
    // Input values into the matrix
    printf("Enter 9 integers for the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add to sum directly}
        }
        // Print the matrix
        printf("\nMatrix:\n");
        for (int i = 0; i < 3; i++) 
        {
            for (int j = 0; j < 3; j++) 
            {
                printf("%d\t", matrix[i][j]);
            }
            printf("\n");
        }
        // Print the sum
        printf("\nSum of all elements = %d\n", sum);

    }
}