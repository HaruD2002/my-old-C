#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i,tmp,j;
	int a[5];
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
}
    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(a[j] >a[i]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
	}
}
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0;i<5;i++){
		printf("%d",a[1]);
		break;
	}
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
