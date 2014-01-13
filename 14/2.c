#include <stdio.h>

int main(int argc, char *argv[]){
  unsigned long n;
  int j;
  int large = 0;
  int count;
  int best = 0;
  int known[1000000];
  int value[1000000];
  for(j = 1; j <= 1000000; j++){
    known[j-1] = 0;
    value[j-1] = 0;
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
      if(n<1000000){
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
