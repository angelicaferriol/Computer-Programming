#include <stdio.h>
#define size 6

//function protoype
//function declaration

float denomination(float count, float total, float denominations[size] = {10000, 5000, 1000, 500, 100, 50, 10, 5, 1, .5, .1, .01})

int main() 
{
	float cash = 0;
	
	//prompt to get the input
	printf("How much cash do you want to withdraw? Enter here: ");
	scanf("%lf", &cash);
	
	//function calling
	denomination(float count, float total; float denominations [size] = {10000, 5000, 1000, 500, 100, 50, 10, 5, 1, .5, .1, .01});
	
	return 0;
}

//function declaration

float denomination(float count, float total, float denominations[size] = {10000, 5000, 1000, 500, 100, 50, 10, 5, 1, .5, .1, .01})
{
	float cash;
	
	for (int i = 0; i < size; i++)
	{
		count = cash / denominations;
		if (count) 
		{
			cash = cash % denominations[i];
			total = count * denominations[i];
			printf("%lf\t %lf\t %lf\n", denominations[i], count, total)
		}
	}
	return printf("Total = \t\t%lf", cash);
}
