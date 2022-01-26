#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  char c[100];
  
  gets(c);
  
  char p;
  
  scanf("%c",&p);
    int i;
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  


for(i=0;i<strlen(c);i++){
  	if(p = c[i])
  	{
  		printf("%d ",p);
	  }
}
  
  
  




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
