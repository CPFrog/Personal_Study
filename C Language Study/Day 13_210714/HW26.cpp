#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand();
char* rsp_covert(int n);

int main(){
	srand((unsigned int)time(NULL));
	
}

int rand(int seed){
	return rand()%seed+1;
}
