#include <stdio.h>

int find(int c) {
	int i =1, sum=0;
	for (i; ;) {
		sum+=i;
		if (sum >c) {
			i--;
			break;
		}
		i++;
	}
	printf ("	n = %d", i);
}

int main() {
	int c = 1, n;
	while (c!=0) {
		printf ("\n	Enter c: ");
		scanf ("%d", &c);
		if (c==0) {
			break;
		} else
			find(c);
	}
	return 0;
}

