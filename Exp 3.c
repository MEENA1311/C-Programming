#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input the arithmetic expression
    printf("Enter an arithmetic expression (e.g., 5 + 3):\n");
    printf("Example: num1 operator num2\n");
    printf("Input: ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Error: Invalid operator. Use +, -, *, or / only.\n");
            return 1;
    }

    // Print the result
    printf("The result of %.2lf %c %.2lf is: %.2lf\n", num1, operator, num2, result);

    return 0;
}
