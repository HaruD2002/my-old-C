#include <stdio.h>

int calculate (double n);
int main(){
	double result;
	calculate (result);	
}
int calculate(double n){
	double i,sum=0 , f=1;
	printf ("input n:");
	scanf ("%lf", &n);
	
	printf ("The sum of the series is :");
	for (i=1;i<n;i++){
		f*=i;
		sum = sum +(i/f);
	}
	printf ("%lf",sum);
	return sum;
}
