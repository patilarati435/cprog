// Call by reference 
#include <stdio.h>
#include<conio.h>
void multi( );
void main()
{
	int n;
   // int*C,*D;
	
	printf("enter the no:"); 
    scanf("%d",&n);
	multi(&n); // Call by reference 
	//printf("Exchaneged Value of A:%d\t Value of B:%d\n",A,B); // 7,5 

}
void multi(int*n)
{
	int i;
    for(i=1;i<=10;i++)
    printf("%d\t%d=%d\n",*n,i,(*n*i));

	    
}