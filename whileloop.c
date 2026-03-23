#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Even numbers (negative to stop): ");
    scanf("%d", &num);
    while(num >= 0) {
        sum += num;
        scanf("%d", &num);
    }
    printf("Sum: %d\n", sum);
    return 0;
}