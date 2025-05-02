#include <stdio.h>
int main() {
    int n, temp, sum = 0, digit;
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    printf((sum == n) ? "Armstrong\n" : "Not Armstrong\n");
    return 0;
}
