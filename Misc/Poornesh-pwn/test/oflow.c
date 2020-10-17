#include <stdio.h>

int FUN_0804902(char * envp[]) {
  printf("ACCESS GRANTED!\n");
const char* s=getenv("FLAG");printf("FLAG :%s\n",(s!=NULL)?s:"FLAG IS MISSING\n");
};
int I() {
  char b[8];
  printf("KEY:\n");
  gets(b);
  puts("ERROR!");
};
int main() {
  I();
  return (0);
};
