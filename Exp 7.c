#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate the sum of the even number series
    for (int i = 1; i <= n; i++) {
        sum += 2 * i; // The i-th even number is 2 * i
    }

    // Output the result
    printf("The sum of the first %d even numbers is: %d\n", n, sum);

    return 0;
}
