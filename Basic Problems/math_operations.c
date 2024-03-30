#include <stdio.h>

int main() {
    // Initialize and declare the variables as floats
    float a, b, c = 0;
    float sum, difference, product, quotient, sum_of_squares = 0;

    // Get the user's input
    printf("Please input the value of a: ");
    scanf("%f", &a);

    printf("Please input the value of b: ");
    scanf("%f", &b);

    printf("Please input the value of c: ");
    scanf("%f", &c);

    // Calculate the sum
    sum = a + b + c;
    printf("\nThe sum of a, b, and c is %.2f.", sum);

    // Calculate the difference
    difference = a - b - c;
    printf("\nThe difference of a, b, and c is %.2f.", difference);

    // Calculate the product
    product = a * b * c;
    printf("\nThe product of a, b, and c is %.2f.", product);

    // Check if the value of b or c is greater than zero
    if (b > 0.0f && c > 0.0f) {
        // Calculate the quotient
        quotient = a / b / c;
        printf("\nThe quotient of a, b, and c is %.2f.", quotient);
    } 
    else {
        // If b or c is not greater than zero, the quotient is undefined.
        printf("\nThe quotient is undefined. Input a valid value greater than 0.");
    }

    // Calculate the sum of squares
    sum_of_squares = (a * a) + (b * b) + (c * c);
    printf("\nThe sum_of_squares of a, b, and c is %.2f.", sum_of_squares);

    return 0;
}
