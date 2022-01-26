#include <stdio.h>

int main() {
	int n, m;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%d",&a[i]);
	}

	printf ("\n	Enter m = ");
	scanf ("%d", &m);
	int b[m];
	for (int i=0; i<m; i++) {
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%d",&b[i]);
	}

	int k=n+m;
	int c[k];
	for (int i=0; i<k; i++) {
		if (i<n) {
			c[i]=a[i];
		} else {
			c[i]=b[i-n];
		}

	}
	for (int i=0; i<k; i++) {
		for (int j=i+1; j<k; j++) {
			if (c[i]>c[j]) {
				int temp = c[i];
				c[i]=c[j];
				c[j] = temp;
			}
		}
	}
	printf ("\n	Array mix of array m and n is: ");
	for (int i=0; i<k; i++) {
		printf (" %d",c[i]);
	}
	return 0;
}

