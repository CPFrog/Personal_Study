#include <stdio.h>
#include <string.h>

int input(char*, char*);
int strcheck(char*, char);
void flush();

int main(){
    while(1){
        char str[100], c;
        if(input(str,&c))
            return 0;
        int pos=strcheck(str, c);
        
        if(pos!=-1)
            printf("\"%s\"문자열 안에 '%c'문자는 %d번 위치에 존재합니다.\n\n", str, c, pos);
        else
            printf("\"%s\"문자열 안에 '%c'문자는 존재하지 않습니다.\n\n",str,c);
    }
}

int input(char* str, char *c){
    while(1){
        printf("# 문자열을 입력하시오 : ");
        scanf("%s", str);
        flush();
        if(strlen(str)>99){
            printf("!!문자열의 길이는 99를 넘을 수 없습니다.\n\n");
            continue;
        }
        else break;
    }
        
    
    if(strcmp(str,"end")==0)
        return 1;
    
    while(1){
        printf("# 문자를 입력하시오 : ");
        scanf("%c", c);
        if(getchar()!='\n'){
            printf("!!검사하려는 문자가 1byte인지 확인하십시오.\n\n");
            flush();
        }
        else break;
    }
    
    return 0;
}

int strcheck(char* str, char c){
    int length=strlen(str);
    int pos=-1;
    for(int i=0;i<length;i++){
        if(str[i]==c){
            pos=i;
            break;
        }
    }
    return pos;
}

void flush(){
    while(getchar()!='\n');
}
