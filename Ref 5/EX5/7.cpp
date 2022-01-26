#include <stdio.h>
#include <stdbool.h>

void nhap(int *arr, int *n) {
	*n = 0;
		printf("\n	Enter n: ");
		scanf("%d", n);

	int i;
	for(i = 0; i < *n; i++) {
		printf("	arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

bool ktra(int* arr, int n) {
	int i;
	for(i = 0; i <= n/2; i++) {
		if(arr[i] != arr[n - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	int arr[100];
	nhap(arr, &n);
	if(ktra(arr, n)) {
		printf("\n	Array symmetry\n");
	} else {
		printf("\n	Array is not symmetry\n");
	}
	return 0;
}
