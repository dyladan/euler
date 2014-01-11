#include <tgmath.h>
#include <stdio.h>

int isPrime(int n){
  if(n==1){
    return 0;
  } else if (n < 4){
    return 1;
  } else if (n%2 == 0){
    return 0;
  } else if (n < 9) {
    return 1;
  } else if (n%3 == 0){
    return 0;
  } else {
    int r = floor(sqrt(n));
    int i;
    for(i = 5; i <= r; i+=6){
      if(n%i == 0){
        return 0;
      }
      if(n%(i+2) == 0){
        return 0;
      }
    }

    return 1;
  }

}
int main(int argc, char *argv[]){
  int i = 1;
  int count = 0;
  while(count < 10001){
    if(isPrime(i)){
      count++;
    }
    i++;
  }
  i--;

  printf("%d\n", i);
}

