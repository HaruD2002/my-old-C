// xoa bo cac phan tu lap lai trong n phan tu
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
  int i,n,j,k;
  scanf("%d",&n);
  int a[100];
  for(i=0;i<n;i++){
  	scanf("%d",&a[i]);
  }

  for(i=0;i<n;i++)	{
    for(j=i+1;j<n;)	{
        if(a[i]==a[j]){
            for(k=j;k<n;k++)	{                
			a[k]=a[k+1];
            	}
            n--;
        	}
        else
            j++;
    	}
	}	


  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  

for(i=0;i<n;i++){
	printf("%d ",a[i]);
}
 
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
