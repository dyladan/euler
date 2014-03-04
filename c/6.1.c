#include <tgmath.h>
#include <stdio.h>

int main(int argc, char *argv[]){
  int sum = 0;
  int powsum = 0;
  int i;
  for(i = 0; i <= 100; i++){
    sum += i;
    powsum += (int)pow(i, 2);
  }
  sum = (int)pow(sum, 2);

  printf("%d\n", sum - powsum);
  return 0;
}
