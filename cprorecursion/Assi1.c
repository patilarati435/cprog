#include<stdio.h>
#include<conio.h>
void fibbo();//function have the parenthesis
void main()
{
    int n ,ft=0,st=1;
    printf("enter no of term");

    scanf("%d",&n);
    printf("%d\t%d\t",ft,st);
    fibbo(n-2);

}
void fibbo(int m)
{
    static int ft=0,st=1,rt;
    
if(m>0)
{  
      rt=ft+st;
    printf("%d\t",rt);
    ft=st;
    st=rt;
    fibbo(m-1);
}
}