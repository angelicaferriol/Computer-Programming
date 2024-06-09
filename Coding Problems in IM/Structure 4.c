/* The inventory of a shoe store lists shoes by stock number. With each stock number, there 
is associated a style number in the range of 0 to 50, the number of pairs in each size (sizes 
range from 3 to 14) and a price. A program is to be written to keep track of the inventory. 
The user is given the following choices: enter a new record, display a record, change the 
price of the stock item, or change the number on hand. When specifying a record the user 
may give either the stock number, or the style number. The array index can be used as a 
stock number. If the user decides to change the stock on hand, the program should ask 
which sizes will have their stock on hand changed. The program should be designed to 
run indefinitely, keeping track of changed in stock */

#include <stdio.h>
#include <string.h>

//structure for the record
struct shoe {
	int stock; // stock number (identifier)
	int style[50]; // style number (0 to 50)
	int pair; // number of pairs in each size (sizes range from 3 to 14)
	int price; // price
};

//list of function prototypes/declaration


int main (){
	
	printf("This is your Shoe Inventory.\n")
	
	struct shoe record[100];
	
	for (int i=0; i < 100; i++) {
		
		int choice;
		printf("Type the number of your choice here: ");
		option(choice); //function to Diplay options
		scanf("%d", &choice);
		
		switch (choice) {
			case 1: function of 1; break; //function to Enter a new record
			case 2: function of 2; break; //function to Display a record
			case 3: function of 3; break; //function to Change the price of a stock item
			case 4: function of 4; break; //function to Change the number on hand
			case 0: printf("Closing the inventory..."); exit(0);
			default:
				printf("Please re-enter a valid number.");
		}
	}
	
	
	return 0;
}

//FUNCTIONS
//user options
void option(int choice) {
	
	printf("\nWhat would you like to do?" 
	"\n1. Enter a new record" 
	"\n2. Display a record"
	"\n3. Change the price of a stock item"
	"\n4. Change the number on hand"
	"\n0. Close\n");
}

//enter a new record: Add a new shoe to the inventory.
int entry(struct shoe add) {
	int stock; // stock number (identifier)
	int style; // style number (0 to 50)
	int pair; // number of pairs in each size (sizes range from 3 to 14)
	int price; // price

	printf("Enter new stock number: ");
	scanf("%d", &add.stock);
	
	printf("Enter style number[0 - 50]: ");
	scanf("%d", &add.style[i]);
	
	printf("Enter the number of pairs in each size [Size Range: 3 - 14]: ");
	scanf("%d", &add.pair);
	
	printf("Enter the price: ");
	scanf("%d", &add.price);
	
	return (call a function);
}

//display a record: Show the details of a specific shoe.
int display() {
	//Prompt for stock number or style number.

	
	//Search the inventory and display the corresponding details.
}

//change the price of the stock item: Update the price of a specific shoe.
int inflation() {
	//Prompt for stock number or style number.
	//Prompt for the new price and update the record.
}

//change the number on hand: Update the stock for specific shoe sizes.
int update() {
	//Prompt for stock number or style number.
	//For each size (from 3 to 14), ask how much to adjust the stock (can be positive or negative).
}






