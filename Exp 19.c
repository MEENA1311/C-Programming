#include <stdio.h>
int main() {
    int base, exp, result = 1;
    scanf("%d %d", &base, &exp);
    for (int i = 0; i < exp; i++)
        result *= base;
    printf("Power = %d\n", result);
    return 0;
}
