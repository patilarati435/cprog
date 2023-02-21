// Demonstrating multi dim array 
// records marks for students 
// 10 students , 5 subj, 2 papers , 2 test - t,p
#include <stdio.h>
#include<conio.h>
void main()
{
	int mrk[10][5][2][2];
	int i,j,k,l;

	printf("Enter Marks data :");
	for(i=0;i<2;i++) // Student counter
	{
		for(j=0;j<2;j++) // subject counter
		{
			for(k=0;k<2;k++) // paper counter
			{
				for(l=0;l<2;l++) // test counter 
				{
					printf("Enter marks of student %d\tSub :%d\tPaper :%d\tTest:%d ",i,j,k,l);
					scanf("%d",&mrk[i][j][k][l]);
				}
			}
		}
	}

}
