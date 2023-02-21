/*. Read inital reading, final reading of a electricity board consumer by reading name,
 meter no.
Compute total units consumed and bill at the rate 3.50/=Rs per unit*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int Ir,Fr,Mn, total;
    char nm;
    float Rate=3.50,bill;
    printf("Enter Consumer Name:");
    scanf("%s",&nm);
    printf("\nEnter Meter no:");
    scanf("%d",&Mn);
    printf("\nEnter initial reading:");
    scanf("%d",&Ir);
    printf("\nEnter Final reading:");
    scanf("%d",&Fr);
    total=Fr-Ir;
    bill=total*Rate;
    printf("total unit:%d\n total bill:%.2f",total,bill);
}