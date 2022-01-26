#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,n,j,temp;
	int sort[7];
	int size;

    for (i=0; i<7; i++) {    
		scanf ("%d",&sort[i]); 
    }      
    for (i = 0; i < 7 ;i++) {     
        for (j = i+1; j < 7; j++) {     
           if(sort[i] > sort[j]) {    
               temp = sort[i];    
               sort[i] = sort[j];    
               sort[j] = temp;    
           }     
        }     
	}
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
for (i=0;i<7;i++){
	printf("%d ",sort[i]);
}







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
