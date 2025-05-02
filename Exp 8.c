#include <stdio.h>

int main() {
    int rows, num = 1;

    // Input the number of rows
    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &rows);

    // Generate Floyd's Triangle
    for (int i = 1; i <= rows; i++) { // Outer loop for rows
        for (int j = 1; j <= i; j++) { // Inner loop for elements in each row
            printf("%d ", num);
            num++; // Increment number
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
