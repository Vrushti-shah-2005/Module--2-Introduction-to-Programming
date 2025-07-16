#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[50]; // Declare two strings with enough space
    // Input strings from user
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);// Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    // Concatenate str2 to str1
    strcat(str1, str2);
    // Display the concatenated string and its length
    printf("\nConcatenated String: %s\n", str1);
    printf("Length of Concatenated String: %lu\n", strlen(str1));

}