#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int i,n,p;
  
  scanf("%d",&n);
  int a[100];
  for (i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }
  
  
  for (i=0;i<n;i++){
  	scanf("%d",&p);
  	if( p<0 || p>n){
  		break;
	  }
	else{
		for (i =  p -1 ;i<n-1;i++){
			a[i] = a[i+1];
		}
		n--;
	}
  }
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
for (i=0;i<n;i++){
	printf("%d ",a[i]);
}

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

