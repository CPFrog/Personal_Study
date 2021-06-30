#include <stdio.h>

// 실수형 상수 표현
int main(){
	int inum=123.456;
	float fnum=123.456; //123.456은 기본적으로 double임. double형 데이터를 float형 변수에 넣는 꼴.
	// 만약 float형 실수를 선언하고 싶으면 123.456f 형식으로 선언해야 함.
	double dnum1=123.456, dnum2=0.00123456;
	printf("inum : %d\n", inum);
	printf("fnum : %f\n", fnum);
	printf("dnum1 : %lf, dnum2 : %lf\n", dnum1, dnum2);
	printf("fnum : %.0f\n", fnum);
	
	return 0;
}
