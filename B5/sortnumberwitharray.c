#include <stdio.h>

int main(){
	int i,n,j,temp;
	
	scanf ("%d",&n);
	int sort[n];
	int size;
	size = sort[n]/sort[0];	
    for (i=0; i<size; i++) {    
		scanf ("%d",&sort[i]); 
    }      
    for (i = 0; i < size; i++) {     
        for (j = i+1; j < size; j++) {     
           if(sort[i] > sort[j]) {    
               temp = sort[i];    
               sort[i] = sort[j];    
               sort[j] = temp;    
           }     
    printf ("%d",sort[i]);
        }     
	}
return 0;
}
