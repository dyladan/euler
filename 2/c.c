#include <stdio.h>
int main(int argc, char *argv[]){
  int sum = 2;
  int i = 3;
  int a = 1;
  int b = 2;

  while(i < 4000000){
    i = a + b;
    a = b;
    b = i;

    if(i % 2 == 0) {
      sum = sum + i;
    }

  }


  printf("%d\n",sum);

  return 0;
}
