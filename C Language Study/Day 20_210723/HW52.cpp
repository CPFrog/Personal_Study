#include <stdio.h>
#include <string.h>
#include <ctype.h>

int input(char*);
int palin_check(char*);
void output(char*, int);
void flush();

int main(){
    while(1){
        char word[100];
    
        if(input(word))
            return 0;
        
        output(word, palin_check(word));
    }
}

int input(char* word){
    while(1){
        printf("# 단어 입력 : ");
        scanf("%s", word);
        flush();
        if(strlen(word)>99){
            printf("!!이 프로그램은 단어의 길이가 99byte 이하임을 가정하고 작성되었습니다.\n");
            continue;
        }
        else break;
    }
    
    if(strcmp(word,"end")==0)
        return 1;
    else return 0;
}

int palin_check(char *word){
    int len=strlen(word);
    int mid=(len%2==0?(len+1)/2:len/2);
    for(int i=0;i<mid;i++){
        if(tolower(word[i])!=tolower(word[len-1-i]))
            return 0;
    }
    return 1;
}

void output(char* word, int result){
    if(result)
        printf("\"%s\" : 회문입니다!\n\n", word);
    else
        printf("\"%s\" : 회문이 아닙니다!\n\n",word);
}

void flush(){
    while(getchar()!='\n');
}
