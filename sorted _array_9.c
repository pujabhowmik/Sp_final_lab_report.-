#include <stdio.h>


int main() {
    
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    
    for (int i = 0; i < n; i++) {
        printf("Index - %d: ", i);
        scanf("%d", &arr[i]);
    }

    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;
}
