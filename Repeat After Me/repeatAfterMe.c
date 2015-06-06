#include <stdio.h>
#include "repeatAfterMe.h"

void printText(int c, char *x[]){
	int i;
	for(i = 1; i < c-1; i++){
		printf("%s ", x[i]);
	}
	printf("%s\n", x[i]);
}

int main(int argc, char *argv[]){
	printText(argc, argv);
	return 0;
}
