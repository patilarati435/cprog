// Demonstrating Nested Conditional branching 
// Read any 3 nos and determine the greatest / Lowest using nested conditional branching 
#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c;
	
	printf("Enter any 3 Nos :");
	scanf("%d%d%d",&a,&b,&c);
	// Compair for determine greatest 
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is greatest \n",a);
		}
		else
		{
			printf("%d is greatest \n",c);
		}
	}// End of first block
	else
	{
		if(b>c)
		{
			printf("%d is greatest \n",b);
		}
		else
		{
			printf("%d is greatest \n",c);
		}
	}
	// Compair for determine lowest 
	if(a<b)
	{
		if(a<c)
		{
			printf("%d is lowest \n",a);
		}
		else
		{
			printf("%d is lowest \n",c);
		}
	}// End of first block
	else
	{
		if(b<c)
		{
			printf("%d is lowest \n",b);
		}
		else
		{
			printf("%d is lowest \n",c);
		}
	}
}
