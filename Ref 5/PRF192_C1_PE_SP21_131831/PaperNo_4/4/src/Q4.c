#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	void reserve(char *s)
{
    char temp;
    int i=0;
    int j=strlen(s)-1;
    while (i<j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	
  printf ("Enter string:");
  scanf ("%c", &s)
  

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n",s[i]);
  //@STUDENT: WRITE YOUR OUTPUT HERE:








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
