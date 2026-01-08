#include <stdio.h>

void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

void printEven(int n) {
    int i;
    for (i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
}

void printOdd(int n) {
    int i;
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
}

int main() {
    int choice, n;
    printf("Name- Akshat Rahangdale\nErp- 10133\n");

    printf("MENU\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value of N: ");
    scanf("%d", &n);

    switch (choice) {
        case 1:
            printNumbers(n);
            break;

        case 2:
            printEven(n);
            break;

        case 3:
            printOdd(n);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}


// Output of the Mini Project Code
// Name- Akshat Rahangdale
// Erp- 10133
// MENU
// 1. Print numbers from 1 to N
// 2. Print even numbers up to N
// 3. Print odd numbers up to N
// Enter your choice: 3
// Enter value of N: 9
// 1 3 5 7 9 
