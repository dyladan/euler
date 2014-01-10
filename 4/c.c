#include <stdlib.h>
#include <stdio.h>
#include <string.h>



char* reverse_string(char *str){
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
  return str;
}

int isPalindrome(int n){
  char str[10];
  char rev[10];
  sprintf(str, "%d", n);
  rev = reverse_string(str);
  if(strncmp(str, rev, 20)==0){
  return 1;
  } else {
  return 0;
  }
}
/*
int main(int argc, char *argv[]){
  int a, b, product;
  for(a = 100; a < 1000; a++){
    for(b = 100; b < 1000; b++){
      product = a*b;
      if(isPalindrome(product)){
        printf("%d\n", product);
      }
    }
  }
}
*/
int main(int argc, char *argv[]){
  printf("%d\n", isPalindrome(908));
}
