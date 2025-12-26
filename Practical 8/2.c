#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Name: Akshat Rahangdale\nErp Id: 10133\n");

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    return 0;
}

// Output  of the code
// Name: Akshat Rahangdale
// Erp Id: 10133
// Enter two numbers: 45
// 56
// After swapping:
// x = 56
// y = 45
