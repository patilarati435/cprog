/*Read person age to display following message as per age
< 18 --Jr. Kid
>=18 <25 College going
>=25 <40 Career oriented
>=40 <60 middle age
>=60 Old age*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter the person age");
    scanf("%d",&age);
    if(age<18)
    printf("jr.kid");
    if(age>=18 && age<25)
    printf("Collage going");
    if(age>=25 && age<40)
    printf("Career oriented");
    if(age>=40 && age<60)
    printf("middle age");
    if(age>=60)
    printf("Old age");
}