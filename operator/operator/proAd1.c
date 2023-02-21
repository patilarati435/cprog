/*Read price for dozen of oranges and quantity to purchase. 
Compute price for given quantity and
round it to nearest integer.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int rprice,temp;
    float price,qty ,tprice ;
    printf("Enter the price for dozen of orange :");
    scanf("%f",&price);
    printf("\nEnter the quntity to purchase: ");
    scanf("%f",&qty);
    tprice=price * qty;
    printf("\nthe total price of orange :%f",tprice);
    rprice=tprice;
    if(tprice>0)
    {
        temp=tprice*10;
        temp=temp%10;
        if(temp>=5)
        {
        rprice++;

    }
    }
    printf("the round price is %d",rprice);


}