/*Create a structure that can describe a restaurant. It should have members that include 
the name, address, average cost, and type of food available. */

#include <stdio.h>
#include <string.h>

int main () {
	
	struct restaurant {
		char name[100];
		char address[100];
		int cost;
		char food[100];
		
	};
	
	struct restaurant A;
	
	printf("Restaurant: ");
	scanf("%[^\n]%*c", &A.name);
	
	printf("\nAddress: ");
	gets(A.address);
	
	printf("\nCost: ");
	scanf("%d", &A.cost);
	getchar();
	
	printf("\nFood: ");
	scanf(A.food, sizeof(A.food), stdin);
	getchar();
	
	printf("\nData collected succesfully!\n");
	
	return 0;
}