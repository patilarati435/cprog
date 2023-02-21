/* develop two arrays to store name,age sort them as per ascending age
Sort them as per ascending name
 if more than 2 elements having same name ,then sort as per their age
 Arati 10
 Arati 20
Likewise irrespective their actual position in an array*/
#include<stdio.h>
#include<string.h>
void main()
{
    char nm[20][20],swap[20] ;
    int  age[100],n,i,j,temp;

    printf("Enter how many no of person");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Enter name[%d] of a person:",i);
         scanf("%s",&nm[i]);
    }
    for(i=0;i<n;i++)
    {
      printf("Enter age[%d] of a person:",i);
      scanf("%d",&age[i]);
    }
    //Sorting according to name using Selection  sort
    for(i=0;i<n-1;i++)
     {
       int position=i;
        for(j=i+1;j<n;j++)
        {
            if( strcmp (nm[i],nm[j])>0 )//less value sort them as per name
             {
              position=j;
              if(position!=i)
              {
               strcpy(swap,nm[position]);
               strcpy(nm[position],nm[i]);
               strcpy(nm[i],swap);
               temp=age[position];
               age[position]=age[i];
               age[i]=temp;
              }
            }
        }
      }
         for(i=0;i<n-1;i++)
     {
       int position=i;
        for(j=i+1;j<n;j++)
        {
            if( strcmp (nm[i],nm[j])==0 && age[i]>age[j])
             {
              position=j;
              if(position!=i)
              {
               strcpy(swap,nm[position]);
               strcpy(nm[position],nm[i]);
               strcpy(nm[i],swap);
               temp=age[position];
               age[position]=age[i];
               age[i]=temp;
              }
             }
        }
      }
     printf("Sorted list in ascending order:\n");
     for(i=0;i<n;i++)
     {
      printf("%s\t%d\n",nm[i],age[i]);
     }

     
}