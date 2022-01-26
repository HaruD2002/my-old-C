#include <stdio.h>

int main() {
	int n, k, x;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%d",&a[i]);
	}
	printf ("\n	Enter k= ");
	scanf ("%d", &k);
	n++;
	for(int i=n; i>k-1; i--){
		a[i]=a[i-1];
	}
	printf ("\n	Enter number x to add into array: ");
	scanf ("%d", &a[k-1]);
	printf ("\n	Array after add %d into positive %d:", x, k);
	for (int i=0; i<n; i++){
		printf (" %d", a[i]);
	}

	return 0;
}

