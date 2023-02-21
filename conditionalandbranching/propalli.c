//read a no to check whether it is palindrom or not
//121 reverce of a no is same121
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,temp,r,p=0;
    printf("Enter a no:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=(n%10);
        p=(p*10)+r;
        n=n/10;

    }
    if(temp==p)
    {
        printf("%d is a pallindrom",temp);

    }
  else
  {
    printf("Not");
  }
}