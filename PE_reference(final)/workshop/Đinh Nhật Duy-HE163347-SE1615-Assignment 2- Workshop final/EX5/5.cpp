#include <stdio.h>

int main() {
	int n, count;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	int a[n], b[n], c[n];
	for (int i=0; i<n; i++) {
		printf ("	Enter a[%d] = ", i);
		scanf ("%d",&a[i]);
	}
	printf ("\n");
	for (int i=0; i<n; i++) {
		printf ("	Enter b[%d] = ", i);
		scanf ("%d",&b[i]);
	}
	printf ("\n	Array c is:");
	for (int i=0; i<n; i++) {
		c[i]=a[i]+b[i];
		printf (" %d", c[i]);
	}

	return 0;
}

