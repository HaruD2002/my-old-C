#include <stdio.h>
#include <math.h>
// check for quadratic equation
// b^2 -4ac 
// > 0 2 solution
// =0 1 solution
// < 0 no solution
int main(){
int a=0,b=0,c=0;

printf("Enter the a,b,c of a quadratic equation");
scanf ("%d %d %d",&a,&b,&c);

if ((b*b)-(4*a*c)>0 )
	printf("2 solution");
else if ((b*b)-(4*a*c)==0)
	printf("1 solution");
else 
	printf("No solution");
}
