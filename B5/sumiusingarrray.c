#include <stdio.h>

int main(){

int number[10],sum=0,n,i;
	
	scanf("%d",&n);

for(i=0; i<n; i++){
	scanf("%d",number[i]);
	sum +=number[i];

}
	printf ("%d",sum);
return 0;
}
