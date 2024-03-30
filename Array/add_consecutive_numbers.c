#include <stdio.h>

int main()
{
	// initializing the two arrays
	int setNumber1[10];
	int setNumber2[10];
	
	// prompting the user input
	printf("Input 10 integers: ");
	
	// using for loop to scan the array elements
	for (int i=0; i<10; i++)
	{
		scanf("%d", &setNumber1[i]);
	}	
	
	// printing array setNumber1
	printf("setNumber1: ");
	for (int i=0; i<10; i++)
	{
		printf("%3d", setNumber1[i]);
	}
	
	// printing a line break between the two arrays
	printf("\n");
	
	// printing array setNumber2	
	printf("setNumber2: ");
	for (int i=0; i<9; i++)
	{
		printf("%3d", setNumber1[i]+setNumber1[i+1]); 
	}
	
	return 0;
}
