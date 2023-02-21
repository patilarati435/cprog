/*  
Four Partners - A,B,C,D ----net capital 
Profit - 10,000/-rs 
How they will share the profit ??
	Net - A+B+C+D;
		10,000*A/Net
		25%

		30%
*/
#include <stdio.h>
#include<conio.h>

void main()
{
	int A,B,C,D,Net;
	
	printf("Enter Capital of A\tB\tC\tD :");
	scanf("%d%d%d%d",&A,&B,&C,&D);
	Net=A+B+C+D;
    (A/Net);
    (B/Net);
    (C/Net);
    (D/Net);
    10000*(A/Net);
    10000*(B/Net);
    10000*(C/Net);
    10000*(D/Net);

	// Compute Profit Share 
	printf("Share of A :%d\tProfit Share :%d\n",(A/Net),10000*(A/Net));
	printf("Share of B :%d\tProfit Share :%d\n",(B/Net),10000*(B/Net));
	printf("Share of C :%d\tProfit Share :%d\n",(C/Net),10000*(C/Net));
	printf("Share of A :%d\tProfit Share :%d\n",(D/Net),10000*(D/Net));


}
