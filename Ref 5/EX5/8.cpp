#include <stdio.h>

int main() {
	int decimal, tempDecimal, binary;
	int rem, place = 1;

	binary = 0;

	printf("\n	Enter any decimal number: ");
	scanf("%d", &decimal);
	tempDecimal = decimal;
	while(tempDecimal > 0) {
		rem = tempDecimal % 2;

		binary = (rem * place) + binary;

		tempDecimal /= 2;

		place *= 10;
	}

	printf("\n	Binary number = %d", binary);

	return 0;
}
