#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;
	
	scanf("%d",&n);

	
  // Fixed Do not edit anything here.
  printf("\nOUTPUT\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	for(i=n;i>=1;i--){
		for (j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");	
	}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
