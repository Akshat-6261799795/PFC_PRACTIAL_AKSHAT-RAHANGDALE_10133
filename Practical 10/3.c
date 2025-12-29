#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[10][10];
    int sum;
    printf("Name- Akshat Rahangdale\nErp- 10133\n");

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}

// Output of the code 
// Name- Akshat Rahangdale
// Erp- 10133
// Enter number of rows and columns: 2 2
// Enter elements of the matrix:
// 4
// 4
// 7
// 6
// Sum of row 1 = 8
// Sum of row 2 = 13



