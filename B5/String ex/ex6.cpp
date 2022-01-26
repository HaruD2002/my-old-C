#include <stdio.h>

main(){
	char s[100];
	int i;
	char c= 'e';
	gets(s);
	for (i=0;s[i]!='\0';i++){
		if (s[i]=='3'){
			s[i]='e';
		}
	}
printf("%s",s);
}
