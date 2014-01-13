#include <stdio.h>
int main(){
  char a;
  short b;
  int c;
  float d;
  double e;
  long f;
  printf("char is %lu bytes\n", sizeof(a));
  printf("short is %lu bytes\n", sizeof(b));
  printf("int is %lu bytes\n", sizeof(c));
  printf("float is %lu bytes\n", sizeof(d));
  printf("double is %lu bytes\n", sizeof(e));
  printf("long is %lu bytes\n", sizeof(f));
}
