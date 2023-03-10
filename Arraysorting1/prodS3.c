/*Selection sort in C: C program for selection sort to sort numbers.
 This code implements selection sort algorithm to arrange numbers of an array in 
 ascending order. With a little modification, it will arrange numbers in descending order.
*/
// Selection sort algorithm implementation in C
#include <stdio.h>
 
void  main()
{
   int array[100], n, c, d, position, swap;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
 
   printf("Enter %d integers\n", n);
 
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
   for ( c = 0 ; c < ( n - 1 ) ; c++ )
   {
      position = c;//4 5 8 1 2
                  //1 5 8 4 2 
 
      for ( d = c + 1 ; d < n ; d++ )
      {
         if ( array[position] > array[d] )
            position = d;//4
      }
      if ( position != c )
      {
         swap     = array[c];
         array[c] = array[position];
         array[position] = swap;
      }
   }
 
   printf("Sorted list in ascending order:\n");
 
   for ( c = 0 ; c < n ; c++ )
      printf("%d\n", array[c]);
 
   
}