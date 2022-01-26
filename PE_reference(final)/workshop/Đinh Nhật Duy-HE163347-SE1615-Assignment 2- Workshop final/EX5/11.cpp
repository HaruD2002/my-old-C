#include <stdio.h>

int main() {
	int n, k;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%d",&a[i]);
	}
	printf ("\n	Enter k= ");
	scanf ("%d", &k);
	for(int i=k-1; i<n; i++){
		a[i]=a[i+1];
	}
	n--;
	printf ("\n	Array after delete positive %d:", k);
	for (int i=0; i<n; i++){
		printf (" %d", a[i]);
	}

	return 0;
}

