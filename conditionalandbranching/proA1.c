//read a no and check prime or not
#include<stdio.h>
#include<conio.h>
int main()
{
    int no,i ,count=0;
    printf("Enter the no:");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
    if(no%2==0)
    {
       count++;
        
    }
    }
    if(count==2)
    {
         printf("%d is prime no",no);
    }
    else
    {
        printf("%d is not prime no",no);
    }
}