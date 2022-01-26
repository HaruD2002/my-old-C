#include<stdio.h>
#include <string.h>

main(){
	char c[10];
	
	gets(c);
	int len = strlen(c);
	int i;
	while(len>=5 && len <=20){
	int h = len/2;
	for (i=h-2;i<h+3;i++){	
		printf("%c",c[i]);
	}
}
}

