#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int indexof (char *str, int str_length, char *token); 
// return vi tri xuat hien cua token trong str 
int sum (char *str);

int main(int argc, char** argv) {
	char str[1000] = {'a','b','c','d','e'};
	char token[2] = {'a','b'};
	char trys[100] = "a123de45e1";
	indexof(str,6,token);
	sum(trys);
	return 0;
}

int indexof (char *str,int str_length, char *token){
	 int len_token = -1;
	 int i,j;
	 
	 for (i=0;i<=str_length;i++){
	 	for (j=i;j <= str_length -1; j++){
	 	if (token[0] = str[i]){
	 		len_token = i+1;
			 return len_token; 
		 }
	 }
}
	return len_token;
}

int sum(char *str){
	int i; 
	int sum=0;
	int length;
	length = strlen(str);
	for (i=0; i<=length;i++){
		if (isdigit(str)){
		return sum += atoi(str);
		
		}
	}
}
