#include <stdio.h>

void fun(int a,int b){
int sum=0;
	a++;
	b++;
return sum;
}

main(){
	int x=5,y=10;
	fun(x,y);
	printf("%d %d",x,y);
	
return 0;
}
