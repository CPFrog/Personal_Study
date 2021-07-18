#include <stdio.h>
#include <limits.h>

int menu();
void flush();
char openFan(char status);
char closeFan(char status);
char reverseFan(char status);
void displayFan(char status);
void print_dash();

int main(){
	char status=0;
	while(1){
		int select=menu();
		if(select==4)
			return 0;
		else{
			printf("status : %d\n", status);
			switch (select) {
				case 1:
					status=openFan(status);
					break;
				case 2:
					status=closeFan(status);
					break;
				default:
					status=reverseFan(status);
					break;
			}
			displayFan(status);
		}
	}
}

int menu(){
	int num;
	while(1){
		printf("1. 환풍구 열기 / 2. 환풍구 닫기 / 3. 환풍구 전체 전환 / 4. 종료 : ");
		scanf("%d",&num);
		if(getchar()!='\n'){
			flush();
			printf("!! 입력값이 잘못되었습니다. 다시 입력하세요.\n");
		}
		else if(num<1||num>4)
			printf("!! 입력값이 잘못되었습니다. 다시 입력하세요.\n");
		else return num;
	}
}

char openFan(char status){
	print_dash();
	printf("\t\t\tFan  열기  작업  실행  화면\n");
	print_dash();
	
	int num;
	while(1){
		printf("* OPEN할 FAN 번호를 입력하시오 (1-8) : ");
		scanf("%d",&num);
		if(getchar()!='\n'){
			flush();
			printf("!! 입력값이 잘못되었습니다. 다시 입력하세요.\n");
		}
		else if(num<1||num>8)
			printf("!! 입력값이 잘못되었습니다. 다시 입력하세요.\n");
		else break;
	}
	char temp=status;
	unsigned char mask=1;
	mask<<=(num-1);
	return temp|mask;
}

char closeFan(char status){
	print_dash();
	printf("\t\t\tFan  닫기  작업  실행  화면\n");
	print_dash();
	
	int num;
	while(1){
		printf("* CLOSE할 FAN 번호를 입력하시오 (1-8) : ");
		scanf("%d",&num);
		if(getchar()!='\n'){
			flush();
			printf("!! 입력값이 잘못되었습니다. 다시 입력하세요.\n");
		}
		else if(num<1||num>8)
			printf("!! 입력값이 잘못되었습니다. 다시 입력하세요.\n");
		else break;
	}
	char temp=status;
	unsigned char mask=1;
	mask<<=(num-1);
	return temp&(~mask);
}

char reverseFan(char status){
	print_dash();
	printf("\t\t\tFan  닫기  작업  실행  화면\n");
	print_dash();
	printf("전체 FAN의 상태가 전환되었습니다. (ON, OFF 상태 뒤바뀜)\n");
	return ~status;
}

void displayFan(char status){
	print_dash();
	for(int i=8;i>0;i--)
		printf("%d번FAN  ",i);
	printf("\n");
	unsigned char mask=CHAR_MIN;
	for(int i=0;i<8;i++){
		if((status&mask)!=0)
			printf(" ON    ");
		else printf(" OFF    ");
		mask>>=1;
	}
	printf("\n");
	printf("status : %d\n", status);
	print_dash();
	return;
}

void print_dash(){
	for(int i=0;i<50;i++)
		printf("-");
	printf("\n");
	return;
}

void flush(){
	while(getchar()!='\n'){}
	return;
}
