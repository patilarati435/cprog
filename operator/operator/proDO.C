// Read any 3 nos to find greatest and lowest among 
#include <stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	
	printf("Enter any 3 nos \n");
	scanf("%d%d%d",&a,&b,&c);
	// Expression to determine greatest 
	if(a>b && a>c)
		printf("%d is greatest \n",a);
	else if(b>a && b>c)
		printf("%d is greatest \n",b);
	else
		printf("%d is greatest \n",c);
// Expression to determine lowest 
	if(a<b && a<c)
		printf("%d is lowest \n",a);
	else if(b<a && b<c)
		printf("%d is lowest \n",b);
	else
		printf("%d is lowest \n",c);


}
