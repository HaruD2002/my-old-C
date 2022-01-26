#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char name[100];
	int i,len;
	gets(name); 
	len = strlen(name);
	
	for (i=0 ; name[i] != '\0'; i++){
	
	if (name[i] %2!=0){
		i++;
		name[i]=toupper(name[i]);
	}
	else{
		name[i] = tolower(name[i]);
	}
}


  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	puts(name);
  
  
  
  
  
  





  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
