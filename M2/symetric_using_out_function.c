#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//1> symmetry

//2> vi tri xuat hien trong mang
int isSym (int a[1000],int n);

int main(int argc, char *argv[]) {

	int n,i; 
	scanf ("%d",&n);
	int a[n];	
		if (isSym(a,n) == 1){
			printf("It is symmetry");
		}
		else {
			printf("It is not symmetry");
		}

	return 0;
}

int isSym (int a[1000],int n){
	int i; 
	int check = 1;
	for (i=0; i<n;i++){
		scanf ("%d",&a[i]);
	}
	for (i=0; i<n;i++){
		if (a[i] != a[n-i-1]){
			check = 0; 
		}
	}
	return check;
	
}
