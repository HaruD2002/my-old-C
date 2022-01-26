#include <stdio.h>

int main() {
	int n, temp=0;
	printf ("\n	Enter n = ");
	scanf ("%d", &n);
	int a[n];
	for (int i=0; i<n; i++) {
		printf ("\n	Enter arr[%d] = ", i);
		scanf ("%d",&a[i]);
	}
	for (int i=0; i<n; i++){
		if(a[i]<a[i-1]){
			temp = a[i];
			break;
		}
	}
	if (temp == 0){
		printf ("\n	Array a is array ascending");
	} else printf("\n	Array a is not array ascending\n	The first number break incremental calculation of array is: %d", temp);

	return 0;
}

