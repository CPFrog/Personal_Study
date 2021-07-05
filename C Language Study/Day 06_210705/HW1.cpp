#include <stdio.h>
void printAge(int age);
void printHeight(double height);

int main(){
	char name[20]="강원경";
	int age=26;
	double height=179.6;
	
	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);
	
	return 0;
}

void printAge(int age){
	printf("나이 : %d세\n", age);
	return;
}

void printHeight(double height){
	printf("키 : %.1lfcm\n", height);
	return;
}
