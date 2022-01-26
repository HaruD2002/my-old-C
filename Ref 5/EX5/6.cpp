#include <stdio.h>
#include <math.h>
int main(){
	int n, x, f=0;
	int a[1000];
	for (int i=0; ; i++){
		printf ("	Enter a[%d] = ", i);
		scanf ("%d", &a[i]);
		if (a[i]==0){
			n=i;
			break;
		}
	}
	printf ("\n	Enter x = ");
	scanf("%d", &x);
	for (int i=0; i<n; i++){
		f+=(a[i]*pow(x,i));
	}
	printf ("	Amount of array is n=%d, and F=%d", n, f);
	return 0;
}

