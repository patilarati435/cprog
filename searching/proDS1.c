/*Linear search in C
Linear search in C programming: The following code implements
 linear search (Searching algorithm) which is used to find whether 
 a given number is present in an array and if it is present then at what 
 location it occurs. It is also known as sequential search.
  It is straightforward and works as follows: We keep on comparing 
  each element with the element to search until it is found or the list ends. 
  Linear search in C language for multiple occurrences and using function.
*/
// Linear search C program
#include <stdio.h>
 
void main()
{
   int array[100], search, c, n;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&n);
 
   printf("Enter %d integer(s)\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
 
   printf("Enter the number to search\n");
   scanf("%d", &search);
 
   for (c = 0; c < n; c++)
   {
      if (array[c] == search)     /* if required element found */
      {
         printf("%d is present at location %d.\n", search, c+1);
         break;
      }
   }
   if (c == n)
      printf("%d is not present in array.\n", search);
 

}