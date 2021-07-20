#include <stdio.h>

int main(){
	float x;
	int cnt=1;
//	for(x=100000001.0f;x<=1000000010.0f;x+=1.0f)
//		printf("%d. x = %.30f\n",cnt++, x);
	// 위 코드는 1이라는 값이 float형의 유효정밀도 자리수의 밖에 있기 떄문에
	// 1이 더해지지 않고 무시되기 때문에 x값은 1억으로 유지되고 무한루프 발생.
	
	//사실 for문에 iterator로써 정수가 아닌 실수를 넣는거 자체가 오류지만,
	//학습 + 실험의 목적으로 코드 작성.
	
	for(x=0.1f;x<=1.0f;x+=0.1f)
		printf("%d. x = %.10f\n",cnt++,x);
	
	return 0;
}
