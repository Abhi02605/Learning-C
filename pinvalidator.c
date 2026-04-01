#include <stdio.h>

int main() {
    int pin;
    int correct_pin = 1674;
    int attempts = 0;

    do {
        printf("Enter 4-digit PIN: ");
        scanf("%d", &pin);
        attempts++;

        if (pin != correct_pin) {
            printf("Incorrect PIN! Try again.\n\n");
        }

    } while (pin != correct_pin);  // keep asking UNTIL correct

    printf("\n✅ Access Granted!\n");
    printf("You got it in %d attempt(s).\n", attempts);

    return 0;
}