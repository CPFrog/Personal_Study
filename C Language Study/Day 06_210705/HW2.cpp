#include <stdio.h>

int main(){
	int money=278970;
	int unit[]={50000,10000,5000,1000,500,100,50,10};
	
	//C++ 문법 쓰면 안되나요.. for(int i:unit)
	for(int i=0;i<8;i++){
		printf("%d원권 => %d개\n", unit[i], money/unit[i]);
		money%=unit[i];
	}
	return 0;
}
