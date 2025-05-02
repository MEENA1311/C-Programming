#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int binary[32], i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    for (i -= 1; i >= 0; i--)
        printf("%d", binary[i]);
    printf("\n");
    return 0;
}
