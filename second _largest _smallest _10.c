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


    if (n < 2) {
        printf("Array should have at least 2 elements.\n");
        return 1;
    }

   
    int smallest = arr[0], secondSmallest = arr[1], largest = arr[0], secondLargest = arr[1];

    for (int i = 2; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } 
        else if (arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }


    if (secondSmallest % 2 == 0) {
        secondSmallest += 2;
    } 

    else {
        secondSmallest -= 2;
    }

    if (secondLargest % 2 == 0) {
        secondLargest *= 2;
    } 
    else {
        secondLargest /= 2;
    }


    for (int i = 0; i < n; i++) {
        if (arr[i] == secondSmallest) {
            arr[i] = secondSmallest;
        }
        if (arr[i] == secondLargest) {
            arr[i] = secondLargest;
        }
    }


    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
