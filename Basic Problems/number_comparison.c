#include <stdio.h>

int main() {
	
   //welcome message to the user    
    printf("Hello!<3 Welcome to the Number Comparison Program.\n");
	
	//initializing the variables
	int uno, dos, tres, quatro, singko;

    // Getting the user's input
    printf("\nPlease enter five different numerical values:\n");
    scanf("%d %d %d %d %d", &uno, &dos, &tres, &quatro, &singko);

    // Assuming that the first number from the user or variable UNO is the highest and lowest
    int lowest = uno;
    int highest = uno;

    // Comparing the value of DOS with the lowest and highest
    if (dos < lowest) {
        lowest = dos;
    } else if (dos > highest) {
        highest = dos;}

    // Comparing the value of TRES with the lowest and highest
    if (tres < lowest) {
        lowest = tres;
    } else if (tres > highest) {
        highest = tres;}

    // Comparing the value of QUATRO with the lowest and highest
    if (quatro < lowest) {
        lowest = quatro;
    } else if (quatro > highest) {
        highest = quatro;}

    // Comparing the value of SINGKO with the lowest and highest
    if (singko < lowest) {
        lowest = singko;
    } else if (singko > highest) {
        highest = singko;}

	//a message to indicate that they have provided the numbers
    printf("\nThank you for providing the numbers!\n");
    
    //printing the possible outcome with two decimal points    
    printf("\nWe detected that the HIGHEST number is %d.\n", highest);
    printf("While the LOWEST number you give is %d.\n", lowest);
    
    //ending message to the user
    printf("\nYou can restart the program to input a new set of numbers.\n");

    return 0;
}
