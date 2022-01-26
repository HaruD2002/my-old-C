#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,i;
 printf("\n\n\nEnter any number: ");
	scanf("%d", &n);
	int c = 0; /*given c = 0 */ 
    for (i = 1; i <= n; i++)  /*For loop given i=1 */
	{
        if (n % i == 0) /**/
		{
        	c++; /*incredement c*/
		}
    }

    
  // Fixed Do not edit anything here.
  	
  printf("\nOUTPUT:\n");
   if (c == 2) /*if c= 2 then*/
	{
        printf("\nThis is a Prime number");
    }
    else 
	{
        printf("\nThis is not a Prime number");
    }
    getch();

	 
  //@STUDENT: WRITE YOUR OUTPUT HERE
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
