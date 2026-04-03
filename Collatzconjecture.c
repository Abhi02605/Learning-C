#include <stdio.h>
int main() {
    int n, original, steps = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    original = n;
    printf("\nCollatz sequence for %d:\n", original);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        printf("➡️ %d", n);
        steps++;
    }
    printf("\n\nTotal steps to reach 1: %d\n", steps);
    return 0;

    
}