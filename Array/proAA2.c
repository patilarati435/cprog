/*construct single dim Array of string to find 
*list of all element of sub
*find All the string start with vowels */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int n,i,j;
    char str[1000],A[1000];
    
    printf("Enter a String:");
    gets(str);
    for(i=0;i<str[i]-1;i++)
    {
    printf("A[%d]=%c\n",i,str[i]);

    }
    //logic for vowelse
    A[0]=' ';
    for(i=0;i<str[i]-1;i++)
    {
    A[i+1]= str[i];

    }
    for(i=0;i<A[i]-1;i++)
    {
    if(A[i]==' ')
        {
            i++;
            if ((A[i]=='a')||(A[i]=='e')||(A[i]=='i')||(A[i]=='o')||(A[i]=='u')||
            (A[i]=='A')||(A[i]=='E')||(A[i]=='I')||(A[i]=='O')||(A[i]=='U'))
            {
                        for(j=i;j<A[j]-1;j++)
                    {
                        if(A[j]!=' ')
                        {
                            printf("%c",A[j]);
                        }
                    else
                       {
                        printf("\n");
                        i=j-1;
                        break ;
                        }
                    }
            }
        }
    }
}



