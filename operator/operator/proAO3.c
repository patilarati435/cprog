/*. Read a no to check whether it is even or odd*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int no;
    printf("Enter the no:");
    scanf("%d",&no);
    if(no%2==0)
    {
        printf("it is even no:%d",no);
    }
    else
    {
     printf("it is odd no:%d",no);
    }
}