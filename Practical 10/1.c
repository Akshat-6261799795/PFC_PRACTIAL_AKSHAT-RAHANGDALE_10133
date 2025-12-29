#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[10][10];
    int max, min;
    printf("Name- Akshat Rahangdale\nErp- 10133\n");

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = arr[0][0];
    min = arr[0][0];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (arr[i][j] > max)
                max = arr[i][j];
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}

// Output of the code 
// Name- Akshat Rahangdale
// Erp- 10133
// Enter number of rows and columns: 2 2
// Enter elements of the matrix:
// 1
// 2
// 3
// 4
// Maximum element = 4
// Minimum element = 1
