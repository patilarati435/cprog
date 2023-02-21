/*C program for bubble sort: C programming code for bubble sort to sort numbers
 or arrange them in ascending order. You can modify it to print numbers in descending 
 order.

Bubble sort algorithm implementation in C */
/* Bubble sort code */
 
#include <stdio.h>
 
void main()
{
  int array[100], n, c, d, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)//5 3 6 8 4 .....
                                 //3 5 6 8 4 .....0
                                 //3 5 6 8 4 .....1
                                 //3 5 6 8 4 ......2
                                 //3 5 6 4 8 ......3
                                
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
 
 
}