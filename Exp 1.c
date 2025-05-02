#include <stdio.h>
int main() {
    int a, b, temp;

    // Input values
    printf("Enter two integers:\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);

    // Exchange using a third variable
    printf("\nExchanging values using a third variable...\n");
    temp = a;
    a = b;
    b = temp;
    printf("After exchange (using third variable): a = %d, b = %d\n", a, b);

    // Exchange without using a third variable
    printf("\nExchanging values without using a third variable...\n");
    a = a + b; // Step 1
    b = a - b; // Step 2
    a = a - b; // Step 3
    printf("After exchange (without third variable): a = %d, b = %d\n", a, b);

    return 0;
}
