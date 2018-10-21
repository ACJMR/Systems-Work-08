#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sieve(int n){
  int size = n*log(n)*1.15;
  int ray[size];
  for(int n = 0; n<size; n++){
      ray[n] = 0;
  }
  int count = 0;
  int focus = 2;
  int i = 2;
  while(count<n){
    if (!ray[focus]){
      while(focus*i<size){
	       ray[focus*i] = 1;
	       i++;
      }
      count++;
      i = 2;
    }
    focus++;
  }
  return focus-1;
}
