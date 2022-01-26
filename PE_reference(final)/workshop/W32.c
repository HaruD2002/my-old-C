#include <stdio.h>
#include <conio.h>
#include <math.h>

main () 
{
	float a, b, c, D, x1, x2; /*value of a,b,c,D,x1,x2*/
	printf("ax^2 + bx +c = 0");
	printf("\nEnter a, b and c: ");
	scanf("%f %f %f", &a, &b, &c);
	D = b*b - 4*a*c; /*calculate quadratic equation*/
	if (D < 0) /*if D value is <0 */
	{
		printf("\nThe equation has no solution");
	}
	else if (D == 0) /*if D= 0*/
	{
		x1 = x2 = - b/ (2*a); /* x1 = x2 value*/
		printf("\nx1 = x2 = %.3f", x1); 
	}
	else 
	{
		x1 = (-b - sqrt(D))/(2*a); /*calculate x1*/
		x2 = (-b + sqrt(D))/(2*a); /*calcluate x2*/
		printf("\nx1 = %.3f", x1);
		printf("\nx2 = %.3f", x2);
	}
	getch(); /*read the console*/
}
