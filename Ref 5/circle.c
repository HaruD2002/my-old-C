#include<stdio.h>


int main(){
	
int i,j;
int sum =0;

for (i=1;i<=3;i++){
	for(j=i;j<=3;j++){
		sum = sum +i+j;
	}
}
printf("%d",sum);
}
