#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error!!! Please enter a positive number.");
    } 
    else {
        printf("Fibonacci sequence up to %d terms:\n", n);

        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                printf("%d, ", a);
                continue;
            }
            if (i == 2) {
                printf("%d, ", b);
                continue;
            }
            next = a + b;
            a = b;
            b = next;
            if (i == n) {
                printf("%d\n", next);
            } 
            else {
                printf("%d, ", next);
            }
        }
    }

    return 0;
}
