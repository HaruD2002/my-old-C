#include <stdio.h>
#include <math.h>
int find(int n){

	if(n<2){
		printf("\n %d is not a prime number.\n",n);
		return 0;
	}

	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			printf("\n %d is not a prime number.\n",n);
			return 0;
		}
	}
	printf("\n %d is a prime number.\n",n);	
	return 1;
	
}




int main(){
	int n;
	while(1){
		printf("Enter n: ");
		scanf("%d",&n);
		find(n);
	}
	return 0;
}
