#include <stdio.h>

int main()
{
	//intializing the arrays
	int nineElements[3][3];
	int threeElements[3] = {0};
	
	//using for loop to get the elements of array from the user
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			printf("Enter the numbers for nineElements Array [%d][%d]: ", i, j);
			scanf("%d", &nineElements[i][j]);
		}
	}
	
	//printing the elements in nineElements Array
	printf("\nElements of nineElements Array:\n");
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
		printf("%3d", nineElements[i][j]);
		}
		printf("\n");
	}
	
	//getting the value of the sum for the three columns
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
		{
			threeElements[j] += nineElements[i][j];
		}	
	}
	
	//printing the elements in threeElements Array
	printf("\nElements of threeElements Array: \n");
	for (int k=0; k<3; k++)
	{
		printf("%3d", threeElements[k]);
	}
	
	return 0;
}
