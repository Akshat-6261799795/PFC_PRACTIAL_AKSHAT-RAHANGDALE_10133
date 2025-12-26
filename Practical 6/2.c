#include <stdio.h>

int main() {
    int a, b, sum = 0;
    printf("Name: Akshat Rahangdale\nErp Id: 10133\n");

    printf("Enter starting number: ");
    scanf("%d", &a);

    printf("Enter ending number: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {
        if (i % 2 != 0)
            continue;

        sum = sum + i;
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}
