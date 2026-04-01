#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;   // save original number to print later

    while (num > 0) {
        digit = num % 10;    // get last digit
        sum   = sum + digit; // add to sum
        num   = num / 10;    // remove last digit
    }

    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;
}