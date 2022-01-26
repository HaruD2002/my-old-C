#include <stdio.h>
#include <ctype.h>

char toUpper(char a);

int countword(char b);


main(){

char mess[5]={'a','b','C','c','D'};	

char message[1000] = {'S','o','n','n','t',' ','s','c','a','r','e',' ','m','e'};
int i = 0;

for (i=0;i<=5;i++){
	char a = message[i];
	printf("%c",toUpper(a));
	}	
for (i=0;i<=1000;i++){
	char b = mess[i];
	printf("%c",toUpper(b));
	}	

}

char toUpper(char a){
	if (a >=97 && a<=1220){
		return a-32;
	}
}
int countord (char b){
	int count = 0; 
	
	if (b = ' '){
		count ++;
	}
	return count;
	
}
