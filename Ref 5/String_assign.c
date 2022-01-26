#include <stdio.h>
#include <string.h>
#include <stdbool.h>
	void main(){
		char s[1000],p[1000];
		int choice,count=0,i,j,word=0;
		bool valid=true;
		char * token;
		do{
			printf("Choice one of thge following option:\n");
			printf("1.Input String\n");
			printf("2.Split String into word\n");
			printf("3.Convert a String into proper form\n");
			printf("4.Remove redundant space\n");
			printf("5.Check valid name\n");
			printf("0.Exit\n");
			printf("Your Selection(0 ->6):");	
			scanf("%d",&choice);
			switch(choice){
				case 1:
					printf("Input your String:");
					scanf("%s",s);
					break;				
				case 2:														
					printf("The original string:\n");
					printf("%s",s);
					for(i=0; i<strlen(s); i++){				
						if(s[i]!=32&&(s[i+1]==32||s[i+1]==NULL))	
						word++;	
					}
					printf("\n");
					printf("Number of words in the string: %d, they are: \n",word);
					token = strtok(s, " ");
					while( token != NULL ) {
      				printf( " %s\n", token ); //printing each token
      				token = strtok(NULL, " ");
   		}				
					break;	
				case 3:					
					printf("Original String");
					puts(s);
   					for(i = 0; i = strlen(s); i++) {
      				if (i == 0 && s[i] != ' ' || s[i] != ' ' && s[i-1] == ' ') {
         			if(s[i] >= 'a' && s[i]<='z') {
            			s[i] = (char)(('A'-'a') + s[i] );
         			}
      			} else if (p[i] >= 'A' && s[i] <= 'Z') {
         				s[i] = (char)(s[i] + ('a' - 'A'));
      			}
   			}
   					puts(p);
					break;
				case 4:
					printf("The original string: ");
					puts(s);					
					break;
				case 5:					
					for(i=0; i<strlen(s); i++){
						if(isalpha(s[i])==0&&s[i]!=32){
						valid=false;
					break;
					}	
				}
					if(valid==true)	
					printf("%s is a valid name\n",s);
					else printf("%s is not a valid name\n",s);
					break;
				case 0:
					return;
				default:
					printf("This is not a valid answer");
					return;
			}
		}while(choice>0 && choice<6);	 
}	
	


	
	
