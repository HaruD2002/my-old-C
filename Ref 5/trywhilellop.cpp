#include<stdio.h>

int main(void){
	int tong=1;
	int i=1;
	
	while(tong <5){
		tong +=i;
		i++;
	}
	printf("%d",tong);
}
