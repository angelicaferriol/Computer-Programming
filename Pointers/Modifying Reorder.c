//Write another version of your program, modifying reorder( ) so that it terminates after the first pass, in which two elements are interchanged.
#include <stdio.h>

// Function prototypes
void swap(int* xp, int* yp);
void reorder(int arr[], int n);

int main()
{ 
    int n;
    // Prompting the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    // Prompting the user to enter the elements of the array       
    printf("Insert the %d elements for the array: ", n);
    for (int i = 0; i < n; i++)
    {
            scanf("%d", &arr[i]);
    }
    
    printf("\n");
    
    // Calling the reorder() function to sort the array
    reorder(arr, n);
    
    // Printing the reordered array
    printf("This is the ascending order of the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // Interchanging the first two elements of the sorted array using pointers
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[1];
    swap(ptr1, ptr2);
    
    // Printing the array with the interchanged first two elements
    printf("\nAnother version with the first two elements interchanged: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}

// Function to perform the swap using pointers
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to perform the reordering
void reorder(int arr[], int n)
{
    int swapped = 0; // Flag indicating whether swapping occurred
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        
        // Finding the index of the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
                swapped = 1; // Set the flag to indicate swapping occurred
            }
        }
        
        // Swapping the minimum element with the first unsorted element
        if (min_index != i)
        {
            swap(&arr[i], &arr[min_index]);
            break; // Terminate after the first pass if swapping occurred
        }
    }
}

