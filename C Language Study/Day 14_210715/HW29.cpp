#include <stdio.h>

int transNumber(int num);
int inputUInt(int n);
void bufferflush();

int main(){
    int p1, p2, d;
    while(1){
        p1=inputUInt(1);
        p2=inputUInt(2);
		if(p1>p2){
			printf("!! 시작 값이 끝 값보다 클 수 없습니다. 처음부터 다시 시작합니다.\n");
			continue;
		}
		d=inputUInt(3);
		break;
    }
	printf("고집수가 %d인 숫자 출력\n", d);
    unsigned int cnt=0;
    for(int i=p1;i<=p2;i++){
		if(transNumber(i)==d){
			cnt++;
			printf("%d\n",i);
		}
    }
	printf("총 개수 : %u개\n",cnt);
	return 0;
}

int transNumber(int num){
    int copy=num, cnt=0;
    while(1){
        int next=1;
        cnt++;
        while(copy>0){
            next*=copy%10;
            copy/=10;
        }
        if(next<10)
            return cnt;
        else
            copy=next;
    }
}

int inputUInt(int n){
    int d;
    while(1){
        if (n==1)
            printf("시작 값(P1) : ");
        else if(n==2)
			printf("끝 값(P2) : ");
		else printf("고집수(N) : ");
        
        int cnt=scanf("%d", &d);
		if(cnt!=1){
			printf("!! 입력값이 정수가 아닙니다. 다시 입력하세요.\n");
			bufferflush();
		}
		else if(n<3&&(d<100||d>10000)){
			printf("!! P%d의 입력 값은 100 이상 10000 이하의 정수만 가능합니다. 다시 입력하세요.\n", n);
			bufferflush();
		}
        else return d;
    }
}

void bufferflush(){
    while(getchar()!='\n'){}
    return;
}
