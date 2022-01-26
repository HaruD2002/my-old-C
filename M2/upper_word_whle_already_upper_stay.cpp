#include <stdio.h>
#include <ctype.h>

char toupper(char a){
if (a >=97 && a<=1220){
return a-32;
}
}

main(){

char message[6] = {"a","B","C","c","d"};	

int i = 0;

for (i=0;i<=5;i++){
	char a = message[i];
	printf("%c",toupper(a));
}
}
