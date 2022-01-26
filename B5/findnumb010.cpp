#include <stdio.h>

int main(){
	int i,n;
	
	scanf("%d",&n);
	int find[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&find[i]);
		if (find[i]>0 && find[i]<10){
		printf(" %d",find[i]);
		}
	}
	return 0;
}
