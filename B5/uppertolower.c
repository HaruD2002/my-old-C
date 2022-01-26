// enter the character check if the character is uppercase or lowercase, 
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>


int main(){
	char c,change;
	do{
	printf ("Enter character: "); 
	c = getchar();
	if (isalpha(c)){ // if c is in the alphabet 
		break;
	}
	fflush(stdin); // clear buffer
	} while (1);
	
	if (islower(c)){
		printf ("Uppercase of the character is %c", toupper(c));
	}
	if (isupper(c)){
		printf ("Uppercase of the character is %c", tolower(c));
	}

	
	
}
