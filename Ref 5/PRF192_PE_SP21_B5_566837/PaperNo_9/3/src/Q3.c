	#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,n,j,temp;
		scanf ("%d",&n);
	int sort[n];
	if (n <10){
    for (i=0; i<n; i++) {    
		scanf ("%d",&sort[i]); 
    }      
    for (i = 0; i <n; i++) {     
        for (j = i+1; j <=n; j++) {     
           if(sort[i] < sort[j]) {    
               temp = sort[i];    
               sort[i] = sort[j];    
               sort[j] = temp;    
           }     
        }     
	}	
}	
else {
	printf(" ");
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for (i=0; i<n;i++){
  	printf("%d\n",sort[i]);
  }
  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
