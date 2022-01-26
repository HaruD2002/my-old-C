#include <stdio.h>
#include <stdlib.h>h
#include <string.h
#include <math.h>
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[100];
    int count = 0, i;
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == 'h'|| s[i] =='g'){
            count++;    
    }
}
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:%.2lf\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
