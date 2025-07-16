//Using break to stop at 5
// #include <stdio.h>
// void main() 
// {
//     int i;printf("Using break (stop when i == 5):\n");
//     for (i = 1; i <= 10; i++) 
//     {
//         if (i == 5) 
//         {
//             break; // Exit loop when i equals 5
//         }
//         printf("%d ", i);
//     }
//     printf("\n");

// }

//Using continue to skip 3
#include <stdio.h>
void main() 
{
    int i;
    printf("Using continue (skip when i == 3):\n");
    for (i = 1; i <= 10; i++) 
    {
        if (i == 3) 
        {
            continue; // Skip the rest of the loop when i is 3
        }
        printf("%d ", i);
    }
    printf("\n");

}
