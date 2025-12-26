#include <stdio.h>

int main() {
    int a, b;
    printf("Name: Akshat Rahangdale\nErp Id: 10133\n");

    printf("Enter starting number: ");
    scanf("%d", &a);

    printf("Enter ending number: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {
        printf("%d ", i);
    }

    return 0;
}



// Sample Input
// 1
// 9
// Your Output
// Name: Akshat Rahangdale
// Erp Id: 10133
// Enter starting number: Enter ending number: 1 2 3 4 5 6 7 8 9  
