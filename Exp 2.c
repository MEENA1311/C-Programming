#include <stdio.h>
#include <math.h> // For sqrt() function

int main() {
    float x1, y1, x2, y2, distance;

    // Input coordinates of the first point
    printf("Enter the coordinates of the first point (x1, y1):\n");
    printf("x1 = ");
    scanf("%f", &x1);
    printf("y1 = ");
    scanf("%f", &y1);

    // Input coordinates of the second point
    printf("Enter the coordinates of the second point (x2, y2):\n");
    printf("x2 = ");
    scanf("%f", &x2);
    printf("y2 = ");
    scanf("%f", &y2);

    // Calculate the distance using the distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the result
    printf("The distance between the two points is: %.2f\n", distance);

    return 0;
}
