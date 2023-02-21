/* A pro for student marksheet 
Input - Student name , roll no and marks obtained in variaous subjects 
Compute - Total ,Percentage 
*/
#include <stdio.h>
#include<conio.h>
void main()
{
// declaration of variables
char snm[10];
int rn,s1,s2,s3,s4,s5,tot;
float per;

// Read data from user 
printf("Enter Student name :");
scanf("%s",&snm);
printf("Enter Roll No:");
scanf("%d",&rn);
printf("Enter Sub1 \tSub2\tSub3\tSub4\tSub5 marks:");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
// Compute 
tot=s1+s2+s3+s4+s5;
per=(float) tot/5;
// output 
printf("\t\t\t Marksheet \n");
printf("Student Name :%s\tRoll No:%d\n",snm,rn);
printf("Sub1%d\tSub2:%d\tSub3:%d\tSub4:%d\tSub5:%d\t",s1,s2,s3,s4,s5);
printf("Total Marks Obtained :%d\n",tot);
printf("Percentage :%.2f\n",per);

}
