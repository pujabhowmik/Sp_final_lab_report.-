#include <stdio.h>

int main() {
    int n;
    long int factorial = 1;

    printf("Enter a non-negative Number: ");
    scanf("%d", &n);


    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }

        printf("Factorial of %d: %ld\n", n, factorial);
        
    } 
    
    else {
        printf("Please Enter a positive number...");
    }

    return 0;
}
