#include <stdio.h>

int main(){
	int hist, liter, ent;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &hist, &liter, &ent);
	
	double total=hist+liter+ent;
	printf("총점은 %.0lf 이고 평균은 %.2lf 입니다.\n", total, total/3);
	
	return 0;
}
