#include <stdio.h>

int main() {
    // Declare the two arrays
    int originalArray[11];
    int sumArray[10];

    // Input 11 numbers into the original array
    printf("Enter 11 numbers:\n");
    for (int i = 0; i < 11; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &originalArray[i]);
    }

    // Calculate the sum of succeeding pairs and store in the second array
    for (int i = 0; i < 10; i++) {
        sumArray[i] = originalArray[i] + originalArray[i + 1];
    }

    // Display the original array
    printf("\nOriginal Array:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", originalArray[i]);
    }

    // Display the sum array
    printf("\n\nSum Array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", sumArray[i]);
    }

    return 0;
}
