#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,j,k;
  int n[100];
  
  
  for(i=0;i<6;i++){
  	scanf("%d",&n[i]);
}
 for(i=0;i<6;i++){
 	if(n[i] %2 !=0){
	for(j=0;j<6;j++){
		for(k=j+1;k<6;k++){
			if(n[i]<n[j]){
				int temp = n[i];
				n[i] = n[j];
				n[j] = temp;
			}
		}
	}
}
}
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
 for(i=0;i<6;i++){
 	printf("%d",n[0]);
 	break;
 }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
