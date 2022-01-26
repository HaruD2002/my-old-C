#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int n,i,j; 
  int arr[100];
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
  	scanf("%d",&arr[i]);
  }
  
  
  for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		if(arr[i]< arr[j]){
			int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}	
		
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	 
  for(i=0;i<n;i++){
  		if (arr[i]%2!=0){
  	printf("%d\n",arr[i]);
  	}	
  }







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
