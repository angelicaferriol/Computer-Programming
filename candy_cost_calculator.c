#include<stdio.h>

int main()
{
    //Declare and initialize the variables
    float costCandyA=35.00;
    float costCandyB=45.00;
    float costCandyC=56.00;
    float costCandyD=57.50;
    float weightCandyA, weightCandyB, weightCandyC, weightCandyD;
    float totalA, totalB, totalC, totalD;
    
    //To get the user's input of weight for each type of candy 
    printf("Enter the weight of Candy A (in kg): ");
    scanf("%f", &weightCandyA);
    
    printf("Enter the weight of Candy B (in kg): ");
    scanf("%f", &weightCandyB);
    
    printf("Enter the weight of Candy C (in kg): ");
    scanf("%f", &weightCandyC);
    
    printf("Enter the weight of Candy D (in kg): ");
    scanf("%f", &weightCandyD);
    
    //Calculate the total amount of each bag with the given weight
    totalA = weightCandyA*costCandyA; 
    totalB = weightCandyB*costCandyB;
    totalC = weightCandyC*costCandyC;
    totalD = weightCandyD*costCandyD;
    
    //To display the results
    printf("The total amount for Candy A is Php. %.2f\n", totalA);
    printf("The total amount for Candy B is Php. %.2f\n", totalB);
    printf("The total amount for Candy C is Php. %.2f\n", totalC);
    printf("The total amount for Candy D is Php. %.2f\n", totalD);
    
    return 0;
}
