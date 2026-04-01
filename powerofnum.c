#include <stdio.h>

int main() {
    int base, exponent, result = 1, i = 1;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    while (i <= exponent) {
        result = result * base;  // multiply base by itself
        i++;
    }

    printf("%d ^ %d = %d\n", base, exponent, result);

    return 0;
}
