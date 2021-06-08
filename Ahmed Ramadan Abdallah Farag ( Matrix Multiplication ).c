// This program is considered for calculate the matrix Multiplication

#include <stdio.h>

int main()
{
  int x, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];

// insert the elements for the first matrix

  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d%d", &x, &n);
  printf("Enter the elements of first matrix\n");

  for (  c = 0 ; c < x ; c++ )
    for ( d = 0 ; d < n ; d++ )
      scanf("%d", &first[c][d]);

  printf("Enter the number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);
/** if you entered the number of rows in the first matrix
at the same of the column of the second matrix ,you can't do matrix Multiplication **/
  if ( n != p )
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
  {
// insert the elements for the first matrix

    printf("Enter the elements of second matrix\n");

    for ( c = 0 ; c < p ; c++ )
      for ( d = 0 ; d < q ; d++ )
        scanf("%d", &second[c][d]);

    for ( c = 0 ; c < x ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
      {
        for ( k = 0 ; k < p ; k++ )
        {
          sum = sum + first[c][k]*second[k][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("Product of entered matrices:-\n");

    for ( c = 0 ; c < x ; c++ )
    {
      for ( d = 0 ; d < q ; d++ )
        printf("%d\t", multiply[c][d]);

      printf("\n");
    }
  }

  return 0;
}
