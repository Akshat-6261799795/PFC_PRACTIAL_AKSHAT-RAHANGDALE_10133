#include <stdio.h>

int sumOfDigits(int n)
{
    int sum = 0;
    
    // Name - Akshat Rahangdale
    // Erp - 10133
    while (n != 0)
    {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Name: Akshat Rahangdale\nErp Id: 10133\n");
    scanf("%d", &n);
    printf("Sum of digits = %d", sumOfDigits(n));
    return 0;
}

// Output of the code
// Name: Akshat Rahangdale
// Erp Id: 10133
// 5643
// Sum of digits = 18

