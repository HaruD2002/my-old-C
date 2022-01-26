#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,p ; 
	while (n<=2 || n>=12){
	printf ("N=");
	scanf ("%d",&n);
	
	if (n<=2 || n>=12)
	printf ("Please enter the number bigger than 2 and smaller than 12:");
	
	
	for (i=1 ; i<=n; i++){
		p *=(i+1);
	}
} 
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n %d",p);
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
