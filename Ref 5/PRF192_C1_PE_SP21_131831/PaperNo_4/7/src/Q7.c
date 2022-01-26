#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
  
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,i,j;	
 
	printf("N=");
	scanf ("%d", &n);
	
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
            printf("*");
         
    }

}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n",n);
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
