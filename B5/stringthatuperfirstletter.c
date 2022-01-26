#include <stdio.h>
#include <ctype.h>

int main(){
	char name[100];
	int i;
	
	printf ("Enter Name: ");
	gets(name); 
	
	for (i=0 ; name[i] != '\0'; i++){
		if (i==0){
			if (isalpha(name[i])){
			name[i] =toupper(name[i]);
			continue;
		}
	}
	if (name[i] == ' '){
		i++;
		name[i]=toupper(name[i]);
	}
	else{
		name[i] = name[i];
	}
}
	printf("Hi!", name);
	puts(name);
	
	return 0;
}

