#include <stdio.h>

int main() {
    int n, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("Sum of digits = %d\n", sum);

    if (sum % 2 == 0) {
        printf("Sum is even\n");
    } else {
        printf("Sum is odd\n");
    }

    return 0;
}