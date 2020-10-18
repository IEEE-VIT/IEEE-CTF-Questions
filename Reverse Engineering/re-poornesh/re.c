#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[],char * envp[]) {
        if(argc==2) {
        	const char* s=getenv("FLG");
        	const char* a=getenv("FCMP");
		printf("Checking License: %s\n", argv[1]);
		if(strcmp(argv[1], a)==0) {
			printf("Access Granted!\n");
			printf("FLAG :%s\n",(s!=NULL)?s:"FLAG IS MISSING\n");
		} else {
			printf("WRONG!\n");
		}
	} else {
		printf("Usage: <key>\n");
	}
	return 0;
}
