#include <stdio.h>

int inputUInt(const char* str);
double inputDouble(const char* str);
unsigned long long ipow(unsigned int num, unsigned int n);
double fpow(double fnum, unsigned int n);
void flush();

int main(){
	unsigned int num=inputUInt("* 양의 정수 밑을 입력 하시오 : ");
	unsigned int n1=inputUInt("* 양의 승을 입력 하시오 : ");
	unsigned long long int n_res=ipow(num, n1);
	printf("%u의 %u승은 %llu입니다.\n\n", num, n1, n_res);
	
	double fnum=inputDouble("* 양의 실수 밑을 입력 하시오 : ");
	unsigned int n2=inputUInt("* 양의 승을 입력 하시오 : ");
	double f_res=fpow(fnum, n2);
	printf("%.2lf의 %u승은 %.3lf입니다.\n", fnum, n2, f_res);
	return 0;
}

int inputUInt(const char* str){
	printf("%s", str);
	int input;
	scanf("%d", &input);
	if(getchar()!='\n'){
		flush();
		input=inputUInt("!! 입력은 양의 정수만 가능합니다. 다시 입력하세요 : ");
	}
	else if(input<0)
		input=inputUInt("!! 입력은 양의 정수만 가능합니다. 다시 입력하세요 : ");
	return input;
}

double inputDouble(const char* str){
	printf("%s", str);
	double input;
	scanf("%lf", &input);
	if(getchar()!='\n'){
		flush();
		input=inputDouble("!! 입력은 양의 실수만 가능합니다. 다시 입력하세요 : ");
	}
	else if(input<0)
		input=inputDouble("!! 입력은 양의 실수만 가능합니다. 다시 입력하세요 : ");
	return input;
}

unsigned long long ipow(unsigned int num, unsigned int n) {
	unsigned long long res=1;
	if(num==0)
		res=0;
	else{
		for(unsigned int i=0;i<n;i++)
			res*=num;
	}
	return res;
}

double fpow(double fnum, unsigned int n){
	double res=1;
	if(fnum==0)
		res=0;
	else{
		for(unsigned int i=0;i<n;i++)
			res*=fnum;
	}
	return res;
}

void flush(){
	while(getchar()!='\n') {}
	return;
}
