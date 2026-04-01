#include <stdio.h>
int main() {
    int choice;
    do {
        printf("1. Hello 2. Sum 3. Exit: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Hello!\n"); break;
            case 2: printf("Sum calc\n"); break;
        }
    } while(choice != 3);
    return 0;
}