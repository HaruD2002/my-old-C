#include <stdio.h>


int main(){
	int a,b;
		
	scanf("%d",&a);
	
	if(a == 6 || a == 8){
		return;
	}
	scanf("%d",&b);
	
	if(b == 6 || b == 8){
		return;
	}
	
	int sum = a+b;
	
	printf("%d + %d = %d",a,b,sum);
}
