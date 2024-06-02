#include <stdio.h>
#include <string.h>


int main() {
    char str[20];
    int length, Palindrome = 1, n;


    printf("Enter a string: ");
    scanf("%s", &str);

    printf("Enter a Digit: ");
    scanf("%d", &n);

    int sum = 0, t, r;
    t = n;
    while (t != 0) {
        r = t % 10;
        sum = sum * 10 + r;
        t = t / 10;
    }

   length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            Palindrome = 0;
            break;
        }
    }
    
    if (Palindrome) {
        printf("The string is a palindrome.\n");
        
    } 
    else {
        printf("The string is not a palindrome.\n");
    }

    if (sum == n)
    {
        printf("The digit is a palindrome.\n");
    }
    else{
        printf("The digit is not a palindrome.\n");
    }
    

    return 0;
}
