#include <stdio.h>

void del(int a[], int *n, int k) {
	for(int i=k; i<*n; i++) {
		a[i]=a[i+1];
	}
	*n = *n-1;
}

int main() {
	int n, k;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%d",&a[i]);
	}
	for (int i=0; i<n; i++){
		if (a[i]%2==0){
			del(a, &n, i);
		}
	}
	printf ("\n	Array %d positive is:", n);
	for (int i=0; i<n; i++){
		printf (" %d", a[i]);
	}

	return 0;
}

