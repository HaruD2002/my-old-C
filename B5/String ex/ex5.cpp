#include <stdio.h>

main(){
	char s[100];
	char c;
	int i,count = 0;
	gets(s);
	scanf("%c",&c);
	
	for (i=0;s[i]!='\0';i++){
		if (s[i]==c){
		count++;
	}	
}
printf ("%d",count);
}


