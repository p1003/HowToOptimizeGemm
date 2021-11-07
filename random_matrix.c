#include <stdio.h>
#include <stdlib.h>

#define A( i,j ) a[ (j)*lda + (i) ]

double randfrom(double min, double max) 
{
    double range = (max - min); 
    double div = RAND_MAX / range;
    return min + (rand() / div);
}

void random_matrix( int m, int n, double *a, int lda )
{
  int i,j;

  for ( j=0; j<n; j++ )
    for ( i=0; i<m; i++ )
      A( i,j ) = 2.0 * randfrom(0.0,1.0) - 1.0;
}
