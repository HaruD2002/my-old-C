#include <stdio.h>

main(){
	int i,j;
	float s[5],temp;
	
	for (i=0; i<5;i++){
		scanf ("%f",&s[i]);
	}
	
	for (i=0; i<5;i++){
		for (j=i+1;j<5;j++){
			if(s[j]>s[i]){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;	
			}
		}		
}

	for(i=0;i<5;i++){
		printf("%f ",s[i]);
	}
}
