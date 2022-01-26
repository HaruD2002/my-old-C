#include <stdio.h>

void insert(int a[], int *n, int k, int x) {
	*n=*n+1;
	for(int i=*n; i>k; i--) {
		a[i]=a[i-1];
	}
	printf ("\n	Enter number x to add into array: ");
	scanf ("%d", &a[k]);
	printf ("\n	Array after add %d into positive %d:", x, k);
	for (int i=0; i<*n; i++) {
		printf (" %d", a[i]);
	}
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
	printf ("\n	Enter k= ");
	scanf ("%d", &k);
	insert(a, &n, k, x);
	return 0;
}

