//read name age to checking voting eligibility
#include<stdio.h>
#include<conio.h>
int main()
{
    char nm[20];
    int age;
    printf("Enter the name :");
    scanf("%s",&nm);
    printf("Enter the age:");
    scanf("%d",&age);
if(age>=18)
{
    printf("%s is eligibal for voting and age is %d",nm,age);
}
else
{
    printf("%s is not eligible for voting",nm);
}
return 0;
}