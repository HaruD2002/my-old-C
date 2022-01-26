#include<stdio.h>

main(){
	char name[100],address[100];
	printf("Name:");
	gets(name);
	printf("\nAddress:");
	gets(address);
	
	printf("%s %s",name,address);
}
