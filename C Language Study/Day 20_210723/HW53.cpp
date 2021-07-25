#include <stdio.h>
#include <string.h>

int input(char*);
unsigned int calc(char*);
void output(char*,unsigned int);
void flush();

int main(){
    while (1){
        char str[200];
        if(input(str))
            return 0;
        output(str, calc(str));
    }
}


int input(char* word){
    while(1){
        printf("# 문장을 입력하시오 : ");
        scanf("%s", word);
        flush();
        if(strlen(word)>199){
            printf("!!입력은 199byte를 넘길 수 없습니다.\n\n");
            continue;
        }
        else if(strcmp(word,"end")==0)
            return 1;
        else return 0;
    }
}

unsigned int calc(char* word){
    int len=strlen(word);
    unsigned int sum=0, temp=0;
    for(int i=0;i<len;i++){
        if(word[i]>='0'&&word[i]<='9'){
            temp*=10;
            temp+=(word[i]-'0');
        }
        else{
            if(temp>0){
                sum+=temp;
                temp=0;
            }
        }
    }
    return sum+temp;
}

void output(char* word, unsigned int sum){
    printf("\"%s\" 내의 총 숫자는 [%d]입니다.\n\n", word, sum);
}

void flush(){
    while(getchar()!='\n');
}
