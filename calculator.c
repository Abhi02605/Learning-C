#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        // show menu every loop
        printf("\n===== CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("======================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter first number:  ");
            scanf("%f", &num1);
            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;

            case 3:
                result = num1 * num2;
                printf("%.2f x %.2f = %.2f\n", num1, num2, result);
                break;

            case 4:
                if (num2 == 0) {
                    printf("Error: Cannot divide by zero!\n");
                } else {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;

            case 5:
                printf("Goodbye! Exiting calculator...\n");
                break;

            default:
                printf("Invalid choice! Please enter 1 to 5.\n");
        }

    } while (choice != 5);   // keep looping UNTIL user picks 5

    return 0;
}

