#include <stdio.h>

int main() {
    int num, temp = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        temp = 0;
    } 
    else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                temp = 0;
                break;
            }
        }
    }

    if (temp) {
        printf("%d is a prime number.", num);
    } 
    else {
        printf("%d is not a prime number.", num);
    }

    return 0;
}
