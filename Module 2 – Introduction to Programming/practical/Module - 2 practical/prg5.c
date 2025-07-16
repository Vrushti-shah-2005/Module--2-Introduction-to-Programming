#include <stdio.h>
void main() 
{
    int i;
    // Using while loopprintf("Using while loop:\n");
    i = 1;
    while (i <= 10) 
    {
        printf("%d ", i);
        i++;
    }
    // Line break
    // using for loop
    printf("\n\nUsing for loop:\n");
    for (i = 1; i <= 10; i++) 
    {
        printf("%d ", i);
    }
    // Line break
    // using do-while loop
    printf("\n\nUsing do-while loop:\n");
    i = 1;
    do {
    printf("%d ", i);
    i++;} while (i <= 10);
    printf("\n");

}
