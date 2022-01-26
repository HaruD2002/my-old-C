#include <stdio.h>
#include <stdlib.h>

bool Checkprime(int i){
	for(int k=2; k<=i-1; k++){
		if(i%k==0)	return false; /*find prime number function*/
	}
	return true;
}

void Display(int lower, int upper){
	bool check;
	int row=1,a[100]; 
	int n=0;
	for(int i=lower; i<=upper; i++){
		if(i==1||i==0) continue;
		check= CheckPrime(i); /*useless*/
		if(check==true){ /*if the number is a prime number in the string*/
			printf("%5d",i);
			a[n++]=i; /*print out all the value in the string*/
		}
	} 
	printf("\n3 last: ");
	for(int i=n-3;i<n;i++)
		printf("%5d",a[i]); /*find last number in the string*/
	
}

int main(){
	int lower, upper, columns;
	printf("Table of Primes");
	printf("\n==============");
	printf("\nLower limit: ");
	scanf("%d",&lower);
	printf("Upper limit: ");
	scanf("%d",&upper);
	Display(lower, upper);
}  /*make table*/
