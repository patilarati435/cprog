/*Read price for dozen of oranges and quantity to purchase. Compute price for given quantity and
round it to nearest integer.*/
#include<stdio.h>
#include<conio.h>
void main(){
    int checkround,rf;
    float pri,qty,Total;
    printf("Enter the Price for dozen of  oranges :");//15
    scanf("%f",&pri);
    printf("Quantity to Purchase :");//6.3
    scanf("%f",&qty);
    //compute
    Total=pri*qty;
    printf("Total value: %.2f\n",Total); //94.50 converte float value to decimal value 94(rf=Total)
    rf=Total;
    // printf("amount to be paid :%d\n ",rf);//94
    // printf("-----------------------------------------\n");
    if(Total>0)
    {   checkround=Total*10;   //94.50 * 10 = 945
        checkround=checkround%10; // 945%10= 5
        if(checkround>=5)
        {
            rf++ ;//increment by 1 of main value
        }
    }
    printf("your original  Bill is : %d\n",rf);
}