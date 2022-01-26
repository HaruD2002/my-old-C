#include<stdio.h>

int UCLN(int *a, int *b) {
	int gcd;
	for (int i=1; i<=*a&&i<=*b; i++) {
		if (*a%i==0 && *b%i==0) {
			gcd=i;
		}
	}
	return gcd;
}
int BCNN(int *a, int *b) {
	int lcm;
	if (*a > *b) {
		for (int i=*a; ; i++) {
			if (i%*a==0 && i%*b==0){
				lcm = i;
				break;
			}
		}
	} else {
		for (int i=*b; ; i++) {
			if (i%*a==0 && i%*b==0){
				lcm = i;
				break;
			}
		}
	}
	return lcm;
}
int main(){
	int a,b,GCD,LCM;
	printf("Enter a= ");
	scanf("%d",&a);
	printf("Enter b= ");
	scanf("%d",&b);
	GCD = UCLN(&a,&b);
	printf ("\nThe greatest common divider (GCD) of %d and %d: %d.", a, b, GCD);
	LCM = BCNN(&a,&b);
	printf ("\nThe least common multiple (LCM) of %d and %d: %d.", a, b, LCM);
	return 0;
}  


