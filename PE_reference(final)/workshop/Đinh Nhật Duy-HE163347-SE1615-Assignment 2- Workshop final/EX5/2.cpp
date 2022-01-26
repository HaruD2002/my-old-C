#include <stdio.h>

int main(){
	int n, x, count=0;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++){
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%d",&a[i]);
	}
	printf ("\n	Enter x = ");
	scanf("%d",&x);
	for (int i=0; i<n; i++){
		if (a[i]==x){
			count++;
		}
	}
	printf ("\n	Frequency of %d in arr: %d", x, count);

	return 0;
}

