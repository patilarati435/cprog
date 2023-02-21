/*4. Read temp in centigrade and if it more than 30 display message hot , if it is more
 than 40 very hot else
normal*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int temp;
    printf("Enter the temprature in centigrade");
    scanf("%d",&temp);
    if(temp>=30 && temp<=40)
    {
        printf(" hot");

    }
    else if( temp>=40)
    {
        printf("very hot");

    }
    else 
    {
        printf("normal");
    }
}