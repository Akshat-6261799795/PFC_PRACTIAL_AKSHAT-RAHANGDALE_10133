#include <stdio.h>

int main() {
    int pin = 1234, enteredPin, attempts = 3;
    printf("Name: Akshat Rahangdale\nErp Id: 10133\n");

    while (attempts > 0) {
        printf("Enter ATM PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("Access Granted. Welcome!\n");
            break;
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }

    if (attempts == 0) {
        printf("Card Blocked. Too many wrong attempts.\n");
    }

    
    return 0;
}
