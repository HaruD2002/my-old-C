#include<stdio.h>
#include<math.h>
#include<string.h>

int check_in(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		if(a[i]==n)
			return 1;
	}
	return 0;
}

int main(){	
	//IN
	int n, a[20];
	scanf("%d",&n);
	int i;
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	//OUT
	int b[20], j=0;
	for(i=0; i<n; i++){
		if(a[i]%2==0){
			b[j] = a[i];
			j++;
		}else{
			if(check_in(b,a[i])==0){
				b[j] = a[i];
				j++;
			}
		}
	}
	
	printf("\nOUTPUT:\n");
	for(i=0; i<j; i++){
		printf("%d\n",b[i]);
	}
	
	return 0;
}
