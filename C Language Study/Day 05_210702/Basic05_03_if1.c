#include <stdio.h>

int main(){
	int num;
	
	printf("사과는 = 1, 키위 = 2, 복숭아 = 3, 수박 = 4, 없음 = 0\n");
	printf("좋아하는 과일 번호를 고르세요 : ");
	scanf("%d", &num);
	
	if(num==1)
		printf("사과 : 아오리, 부사, 홍로\n");
	else if(num==2)
		printf("키위 : 그린 키위, 골드 키위\n");
	else if(num==3)
		printf("수박 : 애플 수박, 망고 수박\n");
	else if(num==4)
		printf("좋아하는 과일이 없습니다.\n");
	else printf("입력한 값에 대응하는 과일을 찾을 수 없습니다.");
	
	return 0;
}
