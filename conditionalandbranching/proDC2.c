// Demonstrating if ....ladder 
// read percentage and determine grade 
// <50 --no, >=50 <65 --C ,>=65 <75 --B,>=75 <85 A, A+
#include <stdio.h>
#include <conio.h>

void main()
{
	float per;
	
	printf("Enter Percetage of a student :");
	scanf("%f",&per);
	// Conditional Branching using if...ladder
	if(per<50.0)
		printf("No Grade");
	else if(per<65.0)
		printf("Grade  :C");
	else if(per<75.0)
		printf("Grade  :B");
	else if(per<85.0)
		printf("Grade  :A");
	else
		printf("Grade  :A+");
		


}
