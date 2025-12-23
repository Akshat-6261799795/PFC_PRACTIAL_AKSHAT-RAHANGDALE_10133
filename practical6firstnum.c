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
