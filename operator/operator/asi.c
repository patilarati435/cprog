#include <stdio.h>
#include<conio.h>

void main()
{
    int temp;
    printf("Enter the temperature in rang between 12 to 35");
    scanf("%d",&temp);
    if(temp<12)
    {
        printf("temperatur is super cool");
    }
   else if(temp>=12 && temp<20)
    {
        printf("temperatur is Average cool");
    }
    else if(temp>=20 && temp<35)
    {
        printf("temperatur is warm");
    }
    else if(temp>=35)
    {
     printf("temperatur is hot");   
    }
}