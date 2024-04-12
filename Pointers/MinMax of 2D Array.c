//Write a program that finds the maximum and minimum elements of a two-dimensional array. Use an array version and a pointer version.
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void arr_minmax(int arr[10][10], int row, int column);
void point_minmax(int *arr_ptr, int row, int column);

int main ()
{
    int row, column;

    // Prompting the user to enter the number of rows of the array
    printf("Enter the number of rows of the array: ");
    scanf("%d", &row);

    // Prompting the user to enter the number of columns of the array
    printf("Enter the number of columns of the array: ");
    scanf("%d", &column);

    // Define the 2D array
    int arr[10][10];

    // Prompting the user to enter the elements of the array
    printf("\nEnter the elements for the array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element at position [%d,%d]: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate minimum and maximum using array version
    printf("\nArray Version:\n");
    arr_minmax(arr, row, column);

    // Convert 2D array to 1D array to use pointer version
    int *arr_ptr = (int *)malloc(row * column * sizeof(int));
    if (arr_ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit with error code
    }
    int k = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            arr_ptr[k++] = arr[i][j];
        }
    }

    // Calculate minimum and maximum using pointer version
    printf("\nPointer Version:\n");
    point_minmax(arr_ptr, row, column);
    
    // Free allocated memory
    free(arr_ptr);

    return 0;
}

// Function to find minimum and maximum using array version
void arr_minmax(int arr[10][10], int row, int column)
{
    int min = arr[0][0], max = arr[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}

// Function to find minimum and maximum using pointer version
void point_minmax(int *arr_ptr, int row, int column)
{
    int min = *arr_ptr, max = *arr_ptr;
    for (int i = 0; i < row * column; i++)
    {
        if (*(arr_ptr + i) < min)
            min = *(arr_ptr + i);
        if (*(arr_ptr + i) > max)
            max = *(arr_ptr + i);
    }
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}
