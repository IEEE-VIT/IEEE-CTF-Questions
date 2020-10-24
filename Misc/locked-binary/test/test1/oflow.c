#include <stdio.h>

int FUN_0804902(char * envp[]) {
  fprintf(stderr,"ACCESS GRANTED!\n");
const char* s=getenv("FLAG");fprintf(stderr,"FLAG :%s\n",(s!=NULL)?s:"FLAG IS MISSING\n");
};
int I() {
  char b[8];
  fprintf(stderr,"KEY:\n");
  gets(b);
  fprintf(stderr,"ERROR!");
};
int main() {
  I();
  return (0);
};
