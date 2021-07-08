#include <stdio.h>

int input();
int calc(int stations);
void output(int bill);


int main(){
	for(int i=0;i<5;i++)
		output(calc(input()));
	return 0;
}

int input(){
	int num;
	printf("역수를 입력하시오 : ");
	scanf("%d",&num);
	return num;
}

int calc(int stations){
	int charge=600;
	if(stations>5){
		charge=800;
		if(stations>10){
			for(int i=11;i<=stations;i+=2)
				charge+=100;
		}
	}
	return charge;
}

void output(int bill){
	printf("요금 : %d\n",bill);
	return;
}
