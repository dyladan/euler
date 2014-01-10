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
int main(int argc, char *argv[]){
  char test[] = "Testing";
  fputs(test, stdout);
  fputs(reverse_string(test), stdout);
}

