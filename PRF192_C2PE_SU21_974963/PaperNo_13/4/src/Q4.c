#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  
   int i, j, rows;
    scanf("%d", &rows);

  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
 for(i=1; i<=rows; i++)
    { 
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
