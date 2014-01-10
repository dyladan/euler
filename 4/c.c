#include <stdlib.h>
#include <stdio.h>
#include <string.h>



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
  fputs(str, stdout);
  reverse_string(rev);
  fputs(str, stdout);
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