#include <stdio.h>

void myflush();

int main(){
    int a=1,b=1,c=1;
    scanf("%d %d %d",&a,&b,&c);
    printf("a: %d, b: %d, c: %d\n", a,b,c); //10 a 20
    //b에 문자를 넣게 되므로 입력을 중단.
    
    char ch;
    ch=getchar();
    printf("ch: %c\n",ch);// 버퍼가 초기화되지 않은 상태이므로 입력을 받지 않고 버퍼에 들어있는 a라는 값을 그대로 가져옴.
    
    myflush(); // 정상적인 동작을 위해 버퍼를 비움. fflush는 유명무실함수가 되었으므로 (C11) 함수를 정의해서 사용함.
    
    ch=getchar();
    printf("ch: %c\n",ch); //문자를 가져오는 과정이 정상적으로 동작함.
    
    //만약 lf에 .만 들어간다면?
    //만약 10.0f나 1.345e+3과 같은 형태라면?
    
    return 0;
}

void myflush(){
    while(getchar()!='\n'){}
    /*
     위의 문장과 동일함.
     char ch='a';
     while(ch!='\n'){
     ch=getchar();
    }
     */
    return;
}
