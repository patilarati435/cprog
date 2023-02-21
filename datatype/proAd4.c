/*. Read a temperature in centigrade to convert it into farhenite.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int ctemp;
    float ftemp;
    printf("Enter the temperatur in centigrade");
    scanf("%d",&ctemp);
    ftemp=ctemp*1.8+32;
    printf("the temperatur in farhenite:%.2f",ftemp); 
}
