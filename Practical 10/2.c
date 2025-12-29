#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[10][10];
    int sum = 0;
    printf("Name- Akshat Rahangdale\nErp- 10133\n");

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    if (r == c) {
        for (i = 0; i < r; i++) {
            sum += arr[i][i];
        }

        printf("Sum of diagonal elements = %d\n", sum);
    } else {
        printf("Diagonal sum not possible for non-square matrix\n");
    }

    return 0;
}

// Output of the code 
// Name- Akshat Rahangdale
// Erp- 10133
// Enter number of rows and columns: 3 3 
// Enter elements of the matrix:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// Sum of diagonal elements = 15
