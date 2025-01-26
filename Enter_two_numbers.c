#include <stdio.h>  // Corrected the header file name

int main()  // Corrected the function name and return type
{
    int A1, A2;  // Corrected the variable declaration

    printf("Enter two numbers: ");  // Corrected the printf statement
    scanf("%d %d", &A1, &A2);  // Corrected the scanf statement

    if (A1 > A2)  // Corrected the if statement
    {
        printf("The first number is greater than the second.\n");  // Corrected the printf statement
    }
    else
    {
        printf("The first number is not greater than the second.\n");  // Corrected the printf statement
    }

    return 0;  // Added a return statement
}