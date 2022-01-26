#include <stdio.h>

int main() {
	int n, count;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%d",&a[i]);
	}
	int min = a[0];
	for (int i=0; i<n; i++) {
		if (min>a[i]) {
			min = a[i];
			count = i;
		}
	}
	printf("\n	Min of array is: %d and appears in position: %d", min, count);

	return 0;
}

