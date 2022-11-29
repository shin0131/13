#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define MAX_NAME       20


struct student {
	int 	ID;
	char 	name[MAX_NAME];
	double 	grade; 
};


int main(int argc, char *argv[]) {
	
	struct student student1 = {2112345, "ShinyoungCho", 4.3};   //instance
	
	student1.ID = 2112392;
	strcpy(student1.name, "ChoShinyoung");
	student1.grade = 4.0;
	
	printf("ID : %i\n", student1.ID);
	printf("name : %s\n", student1.name);
	printf("grade : %lf\n", student1.grade);
	
	return 0;
}
