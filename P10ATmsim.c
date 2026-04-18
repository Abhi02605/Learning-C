#include <stdio.h>
int main() {
    float balance = 8000;
    float amount;
    int choice;
    int pin;
    int correct_pin = 4523;
    int attempts = 0;
    
    
    printf("==============================\n");
    printf("     Welcome to Advaita Bank      \n");
    printf("==============================\n");

    do {
        printf("Enter your PIN: ");
        scanf("%d", &pin);
        attempts++;

        if (pin != correct_pin) {
            if (attempts >= 3) {
                printf("\n🔒 Card Blocked! Too many attempts.\n");
                return 0;    // exit program completely
            }
            printf("Wrong PIN! %d attempt(s) remaining.\n",
                    3 - attempts);
        }

    } while (pin != correct_pin);

    printf("\n✅ PIN Verified! Welcome.\n");

   
    do {

        printf("\n==============================\n");
        printf("        ATM MAIN MENU         \n");
        printf("==============================\n");
        printf("  1. Check Balance\n");
        printf("  2. Withdraw Cash\n");
        printf("  3. Deposit Cash\n");
        printf("  4. Exit\n");
        printf("==============================\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        printf("\n");

        switch (choice) {

          
            case 1:
                printf("------------------------------\n");
                printf("  Current Balance: Rs %.2f\n", balance);
                printf("------------------------------\n");
                break;

            case 2:
                printf("Enter amount to withdraw: Rs ");
                scanf("%f", &amount);

                // error: negative amount
                if (amount <= 0) {
                    printf("❌ Invalid amount!\n");
                }
                // error: more than balance
                else if (amount > balance) {
                    printf("❌ Insufficient balance!\n");
                    printf("   Available: Rs %.2f\n", balance);
                }
                // success: do the withdrawal
                else {
                    balance = balance - amount;
                    printf("✅ Rs %.2f withdrawn!\n", amount);
                    printf("   Remaining: Rs %.2f\n", balance);
                }
                break;

            case 3:
                printf("Enter amount to deposit: Rs ");
                scanf("%f", &amount);

                // error: negative amount
                if (amount <= 0) {
                    printf("❌ Invalid amount!\n");
                }
                // success: add to balance
                else {
                    balance = balance + amount;
                    printf("✅ Rs %.2f deposited!\n", amount);
                    printf("   New Balance: Rs %.2f\n", balance);
                }
                break;

           
            case 4:
                printf("Thank you for using Advaita Bank!\n");
                printf("Please collect your card.\n");
                break;

            
            default:
                printf("❌ Invalid choice!\n");
                printf("   Please enter 1 to 4.\n");
        }

    } while (choice != 4);   // keep looping until exit

    return 0;
}
