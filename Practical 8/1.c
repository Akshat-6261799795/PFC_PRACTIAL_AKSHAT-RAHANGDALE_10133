int sumOfDigits(int n) {
    int sum = 0;
    printf("Name: Akshat Rahangdale\nErp Id: 10133\n");

    while (n != 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }

    return sum;
}
