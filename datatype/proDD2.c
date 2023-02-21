/* 
Program to display the allocated memory size to variable variables 
int %d - 2 bytes 
float -%f- 4bytes

sizeof(var) ; --- return the memory size of any var
*/

#include <stdio.h>
#include<conio.h>

void main()
{
	// declare the variable of all types
	int a;
	float b;
	char c;
	char d[10];
	unsigned int e;
	long f;
	double g;
	

	printf("Memory size for int :%d\n",sizeof(a)); 
	printf("Memory size for float :%d\n",sizeof(b)); 
	printf("Memory size for char :%d\n",sizeof(c)); 
	printf("Memory size for string :%d\n",sizeof(d)); 
	printf("Memory size for unsigned int :%d\n",sizeof(e));
	printf("Memory size for long :%d\n",sizeof(f));
	printf("Memory size for double  :%d\n",sizeof(g));
}
