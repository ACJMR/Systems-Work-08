#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sieve(int n){
  int size = n * log(n*1.0) * 1.15;
  int ray[size];
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
    } // 0 in slot -- prime
    focus++;
  }
  return ray[focus];
}


int main(){
  printf("5th prime: %d\n",sieve(5));

}
