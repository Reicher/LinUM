#include <stdio.h>
#include <stdlib.h>

int main( int argc, const char* argv[] )
{
  int sum = 0;
  int n, i, t;
  
  scanf("%d", &n);

  for(i = 0; i < n; ++i){
    scanf("%d", &t);
    sum += t;
  }
  
  printf("%d\n", sum);

  return sum;
}
