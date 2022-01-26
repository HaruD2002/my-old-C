#include <stdio.h>
#include <math.h>

int main() {
	int r; 
	float p, a;
	printf("Ban kinh hinh tron la: ");
	scanf("%d", &r);
	p = 2*3.14*r;
	a = (r^2)*3.14;
	printf("\nChu vi hinh tron la: %.2f\n", p);
	printf("\nDien tich hinh tron la: %.2f", a);
    return 0;
}
