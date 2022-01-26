#include <stdio.h>

int factoriesseries (double n); 
int main(){
	double result;
	factoriesseries (result);	
}
int factoriesseries(double n){  // 1/!1+2/!2+3/!3+...+n/!n
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
