#include <stdio.h>

int main() {
    int pin = 1234, enteredPin, attempts = 3;
    
    // Name - Akshat Rahangdale
    // Erp - 10133
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

// Output of the code
// Name: Akshat Rahangdale
// Erp Id: 10133
// Enter ATM PIN: 1223
// Incorrect PIN. Attempts left: 2
// Enter ATM PIN: 1235
// Incorrect PIN. Attempts left: 1
// Enter ATM PIN: 1234
// Access Granted. Welcome!


