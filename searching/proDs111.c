// C program for linear search using function
#include <stdio.h>
 
long linear_search(long [], long, long);
 
int main()
{
   long array[100], search, c, n, position;
 
   printf("Input number of elements in array\n");
   scanf("%ld", &n);
 
   printf("Input %d numbers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%ld", &array[c]);
 
   printf("Input number to search\n");
   scanf("%ld",&search);
 
   position = linear_search(array, n, search);//call
 
   if (position == -1)
      printf("%d is not present in array.\n", search);
   else
      printf("%d is present at location %d.\n", search, position+1);
 
   return 0;
} 
 
long linear_search(long a[], long n, long find)
 {
   long c;
 
   for (c = 0 ;c < n ; c++ ) 
   {
      if (a[c] == find)
         return c;
   }
 
   return -1;
}