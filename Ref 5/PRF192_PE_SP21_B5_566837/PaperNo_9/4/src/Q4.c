#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i ,n,j;
	scanf("%d",&n);

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for (i=0;i<=n;i++){
		for (j=0;j<=n;j++){
			if (i==n-j||i==n||j==n)
				printf ("*");
			else printf(" "); 
			printf(" "); 
			}
		printf("\n"); 
		}
	 
  
  
  
  
  
  






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
