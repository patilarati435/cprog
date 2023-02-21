/*Read name , age ,height of a person , apply criteria for selection
 that is age should be in the range 18-
25 years and height should be >=5.4 */
#include<stdio.h>
#include<conio.h>
void main()

{
    int age;
    float height;
    char nm;
    printf("Enter the name :");
    scanf("%s",&nm);
    printf("Enter the age :");
    scanf("%d",&age);
    printf("Enter the height :");
    scanf("%f",&height);
    if(age>=18 && age<=25 && height>=5.4)
    {
        printf("it is eligible");
    }
    else
    {
      printf  ("it is not eligible");
    }

}