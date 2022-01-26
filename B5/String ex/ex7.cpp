#include <stdio.h>
#include <string.h>
main(){
	char s[100];
	char c;
	int i;
	gets(s); 
	scanf("%c",&c);
	
	for (i=0;s[i]!='\0';i++){
		if(strchr(s,c)){
			
			break;
		}
		else {
			printf("-1");
			break;
		}
	}
}	

