/*Declare an array of structures with 12 elements. Each element is a structure with three 
fields. The first field shows the month in numeric form (1 to 12). The second field 
shows the name of the moth. The third field shows the number of days in the month. */

#include <stdio.h>
#include <string.h>

int main() {
	
	struct year {
		int month;
		char name[100];
		int no_days;
	};
	
	struct year now[12];
	for (int i = 0; i < 12; i++) {
		printf("Enter the month in numeric form: ");
		scanf("%d", &now[i].month);
		getchar();
				
		printf("Enter the name of the month: "); 
		fgets(now[i].name, sizeof(now[i].name),stdin);
		
		printf("Enter the no. of days: ");
		scanf("%d", &now[i].no_days);
		getchar();
		
		printf("\n");
	} 


	return 0;
}