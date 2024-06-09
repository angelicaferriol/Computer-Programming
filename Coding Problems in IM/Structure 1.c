/* Create a template for a structure of student record consisting of five fields:
Student ID(int), first name(string), last name(string), total units completed(int), and 
accumulated grade point average(float).*/

// 1. Using gets(var) to get string input
#include <stdio.h>
#include <string.h>

int main() {
	
	struct record {
		int ID;
		char fname[100];
		char lname[100];
		int units;
		float ave;
	};
	
	struct record S1;
	
	printf("Enter the Student ID: ");
	scanf("%d", &S1.ID);
	
	printf("\nEnter first name: ");
	gets(S1.fname);
	getchar();
	
	printf("\nEnter last name: ");
	gets(S1.lname);
	getchar();
	
	printf("\nEnter the total units you take: ");
	scanf("%d", &S1.units);
	getchar();
	
	printf("\nEnter your average: ");
	scanf("%f", &S1.ave);
	getchar();
	
	printf("\nSuccesfully Encoded! Thank you.");
		
	return 0;
}

//Other methods of getting string input:

/* 2. Using fgets: fgets(string_var_name, sizeof(string_var_name), stdin);
#include <stdio.h>
#include <string.h>

int main() {
	
	struct record {
		int ID;
		char fname[100];
		char lname[100];
		int units;
		float ave;
	};
	
	struct record S1;
	
	printf("Enter the Student ID: ");
	scanf("%d", &S1.ID);
	
	printf("\nEnter first name: ");
	fgets(S1.fname, sizeof(S1.fname), stdin);
	getchar();
	
	printf("\nEnter last name: ");
	fgets(S1.lname, sizeof(S1.lname), stdin);
	getchar();
	
	printf("\nEnter the total units you take: ");
	scanf("%d", &S1.units);
	
	printf("\nEnter your average: ");
	scanf("%f", &S1.ave);
	
	printf("\nSuccesfully Encoded! Thank you.");
		
	return 0;
} 
*/

/* 3. Using %[^\n]%*c inside scanf

#include <stdio.h>
#include <string.h>

int main() {
	
	struct record {
		int ID;
		char fname[100];
		char lname[100];
		int units;
		float ave;
	};
	
	struct record S1;
	
	printf("Enter the Student ID: ");
	scanf("%d", &S1.ID);
	getchar();
	
	printf("\nEnter first name: ");
	scanf("%[^\n]%*c", &S1.fname);
	
	printf("\nEnter last name: ");
	scanf("%[^\n]%*c", &S1.lname);	
	
	printf("\nEnter the total units you take: ");
	scanf("%d", &S1.units);
	
	printf("\nEnter your average: ");
	scanf("%f", &S1.ave);
	
	printf("\nSuccesfully Encoded! Thank you.");
		
	return 0;
} 
*/