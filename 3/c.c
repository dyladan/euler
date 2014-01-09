#include <stdio.h>
int main(int argc, char *argv[]){
  long long int n = 600851475143;
  int prime = bprime(n);
  printf("%d\n", prime);
}
int bprime(long long int n){
  long long int i = 2;
  while(i < n){
    if(n%i==0){
      n /= i;
      i--;
    }
    i++;
  }
  return i;
}
