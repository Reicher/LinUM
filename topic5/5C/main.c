#include <stdio.h>
#include <stdlib.h>

#include "my_add.h"

int main( int argc, const char* argv[] )
{
    int sum = 0;
  
  if( argc != 3)
    fprintf( stderr, "To few arguments, 2 needed\n");
  else
    sum = add(strtol(argv[1], NULL, 10),  strtol(argv[2], NULL, 10));
  
  printf("%d\n", sum);

  return sum;
}
