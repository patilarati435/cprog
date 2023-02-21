// Array of Undefined Subscript
#include <stdio.h>
#include<conio.h>
void main()
{
	int A[]={10,20,30,40,50,60,70,80,90,100};
	int i,n;

	n=sizeof(A)/4; // total elements = Sizeof Array/2 - size of int
	printf("Array Subscript\t Element\tMemory Address \n");
	for(i=0;i<n;i++)
		printf("A[%d]\t\t%d\t\t%u\n",i,A[i],&A[i]);

}
