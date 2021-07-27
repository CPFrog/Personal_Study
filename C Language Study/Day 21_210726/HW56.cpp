#include <stdio.h>
#include <string.h>

void input(char[5][20]);
void sort(char[5][20]);
void output(char[5][20]);
void flush();

int main(){
    char str[5][20];
    input(str);
    sort(str);
    output(str);
    return 0;
}

void input(char str[5][20]){
    for(int i=0;i<5;i++){
        printf("%d번 문자열을 입력하시오 : ", i+1);
        scanf("%s", str[i]);
        flush();
    }
}

void sort(char str[5][20]){
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(strcmp(str[i],str[j])>1){
                char temp[20];
                strcpy(temp, str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
}

void output(char str[5][20]){
    printf("\n");
    for(int i=0;i<5;i++){
        printf("str[%d] = %s  %c  %c\n",i,str[i],str[i][0],str[i][strlen(str[i])-1]);
    }
}

void flush(){
    while(getchar()!='\n');
}
