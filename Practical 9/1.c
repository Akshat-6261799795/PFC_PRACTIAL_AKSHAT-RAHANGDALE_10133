#include <stdio.h>

int main() {
    int arr[5] = {4, 3, 2, 1, 5};
    int i, temp;
    int n = 5;

    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Output for this code 
// 5 1 2 3 4
