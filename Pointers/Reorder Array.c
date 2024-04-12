//Write a program that uses the reorder( ) function to sort an array of integers.
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
	
	// Calling the reorder(0) function to sort the array
    reorder(arr, n);
    
    // Printing the reordered array
    printf("This the ascending order of the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
	
	printf("\n");
    return 0;
}

// Function to perform the swap
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to perform the reordering
void reorder(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        
		// Finding the index of the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        
        // Swapping the minimum element with the first unsorted element
        if (min_index != i)
        {
            swap(&arr[i], &arr[min_index]);
        }
    }
}


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
	
	// Calling the reorder(0) function to sort the array
    reorder(arr, n);
    
    // Printing the reordered array
    printf("This the ascending order of the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
	
	printf("\n");
    return 0;
}

// Function to perform the swap
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to perform the reordering
void reorder(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i;
        
		// Finding the index of the minimum element in the unsorted part of the array
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        
        // Swapping the minimum element with the first unsorted element
        if (min_index != i)
        {
            swap(&arr[i], &arr[min_index]);
        }
    }
}

