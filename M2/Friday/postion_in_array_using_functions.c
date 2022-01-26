#include <stdio.h>

int pos(int a[1000],int n, int m);

main(){
	
	int n,m;
	do{
	
	printf ("Enter how many number in array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the number that you want to know the position: ");
	scanf ("%d",&m);
	printf("Enter the array:");
	printf("The number %d is in the %d position\n",m,pos(a,n,m));
	printf("\n");
}
while (n !=0 && n>0);
	return 0; 
}

int pos (int a[1000],int n,int m){
	int i,position=0;
	for (i=1; i<=n; i++){
		scanf ("%d",&a[i]);
	}
	
	for (i=1; i<=n;i++){
	 	 if ( a[i] == m){
	 	 position = i;
		  }
	}
	return position;

}
