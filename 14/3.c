#include <stdio.h>
#define ARRSIZE 1000000

int main(int argc, char *argv[]){
  unsigned long n;
  int j;
  int large = 0;
  int count;
  int best = 0;
  int known[ARRSIZE];
  int value[ARRSIZE];
  printf("known is %lu bytes\n", sizeof(known));
  for(j = 0; j < ARRSIZE; j++){
    known[j] = 0;
    value[j] = 0;
  }

  for(j = 1; j <= 1000000; j++){
    n = j;
    count = 1;
    while(n != 1){
      if(n%2==0){
        n /= 2;
      } else {
        n = 3*n + 1;
      }
      count++;
      if(n<ARRSIZE){
        if(known[n-1]){
          count += value[n-1];
          break;
        }
      }
    }
    known[j-1] = 1;
    value[j-1] = count;
    if(count > large){
      best = j;
      large = count;
    }
  }
  printf("%d\n", best);
}
