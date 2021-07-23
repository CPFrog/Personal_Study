#include <stdio.h>

void input(double*);
double calc_max(double*);
double calc_min(double*);
void output(double, double);
void flush();

int main(){
	double a[5];
	input(a);
	output(calc_max(a), calc_min(a));
}

void input(double* arr){
		for(int i=0;i<5;i++){
			printf("%d번 방 값 : ", i);
			scanf("%lf", &arr[i]);
			if(getchar()!='\n'){
				i--;
				flush();
			}
		}
	
}

double calc_max(double* arr){
	double max=arr[0];
	for(int i=1;i<5;i++){
		if(max<arr[i])
			max=arr[i];
	}
	return max;
}

double calc_min(double* arr){
	double min=arr[0];
	for(int i=1;i<5;i++){
		if(min>arr[i])
			min=arr[i];
	}
	return min;
}

void output(double big, double small){
	printf("\n");
	printf("가장 큰 값 : %.2lf\n",big);
	printf("가장 작은 값 : %.2lf\n",small);
	return;
}

void flush(){
	while(getchar()!='\n');
}
