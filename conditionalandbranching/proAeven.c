//print all even no in the range 0-100,find their sum.

#include<stdio.h>
#include<conio.h>
int main()
{
    int  i ,sum=0;
    printf("All the no in the range of 0-100");
    for(i=0;i<=100;i++)
    {
     if(i%2==0)
     {
        printf("%d\n",i);
        sum+=i;
     }
     
    }
    printf("sumation of all even no is %d",sum);
   
    

 
}