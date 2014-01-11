#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>



void reverse_string(char *str){
  char temp;
  size_t len = strlen(str) - 1;
  size_t i;
  size_t k = len;
  for(i = 0; i < (len +1)/2; i++){
    temp = str[k];
    str[k] = str[i];
    str[i] = temp;
    k--;
  }
}

int isPalindrome(int n){
  char str[10];
  char rev[10];
  sprintf(str, "%d", n);
  strcpy(rev, str);
  reverse_string(rev);
  if(strcmp(str,rev) == 0){
    return 1;
  } else {
    return 0;
  }
}

int main(int argc, char *argv[]){
  int a, b, product, large;
  for(a = 1000; a > 100; a--){
    for(b = 1000; b > a; b--){
      product = a*b;
      if(product < large){
        break;
      }
      if(isPalindrome(product)){
        //printf("%d\n", product);
        large = product;
      }
    }
  }
  printf("Largest is %d\n", large);
}

