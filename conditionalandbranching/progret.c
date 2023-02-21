//read any four nos to determine the gretest among them
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter any four no");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("%d is gretest",a);
    }
    else if(b>a && b>c && b>d)
    {
        printf("%d is gretest",b);
    }
    else if (c>a && c>b && c>d)
    {
        printf("%d is gretest",c);
    }
    else if (d>a && d>b && d>c)
    {
        printf("%d is gretest",d);
    }
}