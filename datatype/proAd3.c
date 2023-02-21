/*3. Read total distance to be travel by biker with the maximum speed 65 km / Hr 
and average fuelconsumption 45 km/liter .
Compute total time and fuel required to cover the given distance*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int dis,speed=65,avg=45 ;
     float time, fuelreq;
    printf("Enter the total distance:");
    scanf("%d",&dis);
    time=dis/speed;
    fuelreq=dis/avg;
    printf("total time in hr:%.2f \n fuel required in liter to cover the given distance:%.2f",time,fuelreq);

}