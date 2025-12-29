#include <stdio.h>

int main() {
    int arr[5] = {4, 3, 2, 1, 5};
    int i;
    int max, min;

    max = min = arr[0];

    for (i = 1; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

// Output for this code 
// Maximum element = 5
// Minimum element = 1
