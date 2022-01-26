// xem so n co phai la prime ko neu la prime thi in ra dang octal cua so do
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  
  int n,i,flag = 0 ;
  scanf("%d",&n);
  
 
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  


 for (i=0;i= n/2;i++){
  	if(n<2){
  		printf("%d is not a prime number",n);
  		break;
	  }
	  else if(n%i==0){
	  	printf("%d is not a prime number",n);
	  	break;
	  }
	  else{
	  	printf("%o",n);
	  	break;
	  }
  }




  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
