/*construct a single dim Array of integerto find
*list all element with sub
*sum
*Avg
*max
*min
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i;
    int A[n],sum=0,max=0,min=1000;
     float Avg;
    printf("Enter the no of element:");
    scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("A[%d]=",i);
 scanf("%d",&A[i]);
    sum=sum+A[i];
    Avg=sum/n;
         if(A[i]>max)
        {
            max=A[i];
        }
        if(A[i]<min)
        {
        min=A[i];
        }
}
  printf("Array Sub\tElement\tMemory Address \n");
	for(i=0;i<n;i++)
	{
		printf("A[%d] \t\t %d \t  %u\n",i,A[i],&A[i]);
	}
printf("sum:%d\nAvg:%.2f\nmax:%d\nmin:%d",sum,Avg,max,min);

}