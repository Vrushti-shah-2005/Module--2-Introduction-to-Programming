#include <stdio.h>
int main() 
{
    FILE *fp;
    char str[] = "Hello, this is a file handling example in C.";
    char buffer[100];
    // Step 1: Create and write to a file
    fp = fopen("example.txt", "w"); // Open file in write mode
    if (fp == NULL) 
    {
        printf("Error creating file!\n");
        return 1;
    }
    // Write string to the file
    fprintf(fp, "%s", str);// Close the file
    fclose(fp);
    // Step 2: Open and read from the file
    fp = fopen("example.txt", "r"); // Open file in read mode
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    // Read and display the content
    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), fp)) 
    {
        printf("%s", buffer);
    }
    // Close the file
    fclose(fp);
    return 0;
}