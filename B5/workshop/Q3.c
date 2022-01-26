#include<stdio.h>
int main(){
	int i,j,n,tmp;
	int arr[100];

	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);	
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]>arr[j]){  
			tmp=arr[i];
			arr[i]=arr[j];
			arr[j]=tmp;	
			}
		}
	}
	for(i=0;i<n;i++){
		if(arr[i]%2 == 0){    
			printf("%d ",arr[i]);
		}
	}
	
	
}
