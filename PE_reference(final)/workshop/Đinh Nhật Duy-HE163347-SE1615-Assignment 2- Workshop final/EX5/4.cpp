#include <stdio.h>

int main() {
	int n, count=0;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%d",&a[i]);
		if (a[i]%2==0){
			count ++;
		}
	}
	printf ("\n	Amount of even number is %d and odd number is %d", count, n-count);

	return 0;
}

