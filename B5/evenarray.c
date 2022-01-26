#include <stdio.h>

int main(){
	int i,j,n,temp;
	int array[1000];	
	printf("Enter the number to use:");
	scanf ("%d",&n);
	printf("Enter the %d to use:\n",n);
	for (i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	for (i=0;i<n;i++){
    	for (j = i+1; j < n; j++){
    		if(array[i]<array[j]){
    			temp=array[i];
    			array[i]=array[j];
    			array[j]=temp;
			}
	}  
}
	for (i=0;i<n;i++){
		if (array[i]%2==0){
			printf("%d ",array[i]);
		}	
	}
return 0;
}
	

