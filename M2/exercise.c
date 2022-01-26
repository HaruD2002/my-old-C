
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// cho ngoi dung nhanp vao 
// khai bao 1 string array voi n phan tu 
// 1 in ra man hinh voi ki tu la capital character 
// 2 kiem tra xem mang co phai doi sung 

main(){
	char s[1000];
	int i; 
	
	gets(s);
	
	for (i=0; s[i] != '\0' ;i++){
		s[i] = toupper(s[i]);
	}
	
	for (i=0; s[i] != '\0'; i++){
		
		
	}
	
	puts(s);
}
