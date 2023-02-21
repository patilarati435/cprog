/*
1. Read a radius of a circle to find diameter, area, circumference .*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int R,D;
    float A,C, pi=3.14;
    printf("Enter the radius of a circle ");
    scanf("%d",&R);
    D=2*R;
    A=pi*R*R;
    C=pi*D;
    printf("Diameter:%d\n Area:%.2f\n Circumference:%.2f",D,A,C);
}