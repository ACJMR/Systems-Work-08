#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sieve(int n){
  int size = 100;
  int ray[size];
  for(int n = 0; n<size; n++){
      ray[n] = 0;
  }
  int count = 0;
  int focus = 2;
  int i = 2;
  while(count<n){
    //printf("focus %d\n",focus);
    //printf("ray[focus] %d\n",ray[focus]);
    if (!ray[focus]){
      while(focus*i<size){
	       ray[focus*i] = 1;
         //printf("mult %d\n",focus*i);
	       i++;
       }
      count++;
      i = 2;
    }
    focus++;
  }
  return focus-1;
}
