#include <stdio.h>

int main(){
	int n;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	float a[n]; 
	for (int i=0; i<n; i++){
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%f",&a[i]);
	}
	float max = a[0];
	for (int i; i<n; i++){
		if (max < a[i]){
			max = a[i];
		}
	}
	printf ("\n	Max of array: %f", max);
	return 0;
}

