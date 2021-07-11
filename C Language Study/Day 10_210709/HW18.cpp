#include <stdio.h>
typedef struct {
	int age;
	int num;
} info;
info input();
void output(int bill, int discount);

int main(){
	info enter=input();
	int fee;
	if(enter.age<=7)
		fee=500;
	else if(enter.age<=13)
		fee=700;
	else if(enter.age<=19)
		fee=1000;
	else if(enter.age<=55)
		fee=1500;
	else fee=500;
	int bill=fee*enter.num;
	int discount=(enter.num>=5?bill/10:0);
	output(bill,discount);
	return 0;
}

info input(){
	info temp;
	printf("입장객의 나이를 입력하시오 : ");
	scanf("%d",&temp.age);
	printf("입장객의 수를 입력하시오 : ");
	scanf("%d",&temp.num);
	return temp;
}

void output(int bill, int discount){
	printf("입장료 => %d원\n", bill);
	printf("할인금액 => %d원\n", discount);
	printf("결제금액 => %d원\n", bill-discount);
	return;
}
