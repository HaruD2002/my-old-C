#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int i,sum=0;
	int n[5];
	
	for (i=0;i<=5;i++){
		scanf ("%d",&n[i]);
	}
	for (i=0;i<=5;i++){
  	if (n[i]%2==0){
  		sum = sum +n[i];
	  }
  }
	


  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  printf ("%d",sum);
  
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:










  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
