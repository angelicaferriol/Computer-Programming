#include <stdio.h>

void REVERSE(int X[], int Y[], int N) {
    for (int i = 0; i < N; i++) {
        Y[i] = X[N - 1 - i];
    }
}

int main() {
    // Example usage
    int X[] = {1, 2, 3, 4, 5};
    int N = sizeof(X) / sizeof(X[0]);

    // Create an array Y to store the reversed values
    int Y[N];

    // Call the REVERSE function
    REVERSE(X, Y, N);

    // Print the reversed array Y
    printf("Reversed array Y: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", Y[i]);
    }

    return 0;
}
