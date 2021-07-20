#include <stdio.h>

int add(int, int);

int main(){
	int a=5, b=10;
	printf("%d\n",add(a,b));
	return 0;
}

int add(int a, int b){
	return a+b;
}
