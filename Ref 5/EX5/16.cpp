#include <stdio.h>

void insert(int a[], int *n, int k) {
	*n=*n+1;
	for(int i=*n; i>k; i--) {
		a[i]=a[i-1];
	}
	a[k]=0;
}

int main() {
	int n, k, x;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%d",&a[i]);
	}
	for (int i=0; i<n; i++) {
		if (a[i]%2==1) {
			insert(a, &n, i+1);
		}
	}
	printf ("\n	Array %d positive is:", n);
	for (int i=0; i<n; i++) {
		printf (" %d", a[i]);
	}

	return 0;
}

