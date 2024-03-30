#include <stdio.h>

main(){
	//declare the variables 
	//we= weight on earth, 
	//wm= weight on mars, 
	//wj= weight on jupiter
	float we, wm, wj; 
	
	// intialize the variables
	we=0; 
	wm=0; 
	wj=0;
	
	//get user input
	printf("Please input weight on earth in pounds:");
	scanf("%f", &we);
	
	//solve for weight on mars and on jupiter
	wm= we * 0.38;
	wj= we * 2.64;
	
	//display output
	printf("Weight on mars is: %.2f pounds \n", wm);
	printf("Weight on jupiter is: %.2f pounds \n", wj);
	return 0;
}
