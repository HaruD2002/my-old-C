#include<stdio.h>
#include<string.h>

int main(){	
	int a[20];
	int i;
	for(i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	int min, j=0;
	for(i=0; i<5; i++){
		if(a[i]%2==0){
			min = a[i];
			j++;
		}
	}
	printf("\nOUTPUT:\n");
	for(i=0; i<5; i++){
		if(a[i]%2==0){
			if(min>a[i]){
				min = a[i];
			}
		}
	}
	if(j!=0)
		printf("%d",min);
	return 0;
}
