#include#include <stdio.h>

void printRightAngleTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n ;
    printf("Name: Akshat Rahangdale\nErp Id: 10133\n");
    scanf("%d", &n);
    printRightAngleTriangle(n);
    return 0;
}


// Output of the code
// Name: Akshat Rahangdale
// Erp Id: 10133
// 5
// *
// **
// ***
// ****
// *****

