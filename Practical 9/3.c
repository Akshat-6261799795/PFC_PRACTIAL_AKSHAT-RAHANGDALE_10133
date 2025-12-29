#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int sum = 0;
    printf("Name- Akshat Rahangdale\nErp- 10133\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of all even elements = %d\n", sum);

    return 0;
}

// Output for the code 
// Name- Akshat Rahangdale
// Erp- 10133
// Enter number of elements: 4
// Enter 4 elements:
// 3
// 4
// 2
// 4
// Sum of all even elements = 10
