#include <stdio.h>

char menu();
int inputInt(const char* str);
int deposit(int cash, int current);
int withdraw(int cash, int current);
void print_balance(int balance);
void flush();


int main(){
	int balance=0;
	print_balance(balance);
    while(1){
        char select=menu();
		
        if (select=='q') {
            printf("프로그램을 종료합니다.\n");
            return 0;
        }
		else {
			int cash;
			if(select=='i'){
				cash=inputInt("# 입금액을 입력하세요 : ");
				while(cash<0)
					cash=inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
				balance=deposit(cash, balance);
			}
			else{
				cash=inputInt("# 출금액을 입력하세요 : ");
				while(cash<0)
					cash=inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
				balance=withdraw(cash, balance);
			}
			flush();
		}
    }
}

char menu(){
    char select;
	while(1){
		printf("# 메뉴를 선택하시오(i-입금, o-출금, q-종료) : ");
		int cnt=scanf("%c", &select);
		if(cnt!=1||(select!='i'&&select!='o'&&select!='q')){
			printf("* 잘못 입력하셨습니다.\n\n");
			flush();
		}
		else return select;
	}
}

int inputInt(const char* str){
	int cash;
	printf("%s", str);
	int cnt=scanf("%d", &cash);
	if(cnt!=1){
		flush();
		return inputInt("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
	}
	else return cash;
}

int deposit(int cash, int current){
	int balance=current+cash;
	print_balance(balance);
	return balance;
}

int withdraw(int cash, int current){
	int balance=current-cash;
	if(balance<0){
		printf("* 잔액이 부족합니다.\n");
		print_balance(current);
		return current;
	}
	else{
		print_balance(balance);
		return balance;
	}
}

void print_balance(int balance){
	printf("* 현재 잔액은 %d원 입니다.\n\n", balance);
	return;
}

void flush(){
	while(getchar()!='\n') {}
	return;
}
