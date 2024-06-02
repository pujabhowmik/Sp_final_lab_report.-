#include <stdio.h>

int main() {
    int num, sum = 0, dig;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    while (num > 0) {
        dig = num % 10;
        sum += dig;
        num /= 10;
    }
    printf("The sum of digits is: %d", sum);

    return 0;
}
