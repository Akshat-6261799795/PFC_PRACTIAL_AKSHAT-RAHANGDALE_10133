#include <stdio.h>

int main() {
    int n, i, temp;
    int arr[100];
    printf("Name- Akshat Rahangdale\nErp- 10133\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Output for the code 
// Name- Akshat Rahangdale
// Erp- 10133
// Enter number of elements: 4
// Enter 4 elements:
// 3
// 4
// 3
// 2
// Reversed array:
// 2 3 4 3 

