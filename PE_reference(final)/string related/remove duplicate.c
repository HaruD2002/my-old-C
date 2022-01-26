#include <stdio.h>
#include<string.h>

int removeDuplicates(char[10][31], int[10], int *);

void display(char[10][31], int);

void display(char name[10][31], int k) {
	int i;
	for (i=0; i<k; i++) {
		printf("\n%s",name[i]);
	}	
}

int removeDuplicates(char name[10][31], int age[10], int *n) {
	if (*n == 0 || *n == 1)    return *n;    
    int i,j,k;
    k = *n;
    char temp[k];
    printf("\nName before removing: ");
    display(name,k);
	for (i = 0; i < k; i++) {	  		
	  for (j = i+1; j < k; j++) {	  
	    if (strcmp(name[j],name[i]) == 0){
				if(age[j] > age[i])
					// Use strcpy to replace the position of the elements in the array
				   {
				     //Write code here
				       }
				else    
					{
					//Write code here
						}	      	
				k -= 1;					      			
			}			
		}
	}
	return k;	
}
void main() {
	char name[6][31] = { "Homer", "Marge", "Homer", "Bart", "Marge", "Lisa" }; 
	int age[6] = {45,22,42,14,21,8};
	int p = sizeof(age) / sizeof(age[0]);
	int *n;
	n = &p;
	printf("\n%d",*n);
	printf("\nSize before removing: %d",*n);
	int m = removeDuplicates(name,age,n);
	printf("\nSize after removing: %d",m);
	printf("\nName after removing: ");
	display(name,m);
		
}
