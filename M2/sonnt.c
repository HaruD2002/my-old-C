// tinh dien tich phan dao nhau cua 2 hinh chu nhat
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main(){
	float x1,x2,x3,x4; // coordinate of the first rectangle && the parameter of the first rectangle
	float areax;// area of x
	float y1,y2,y3,y4;  // coordinate of the second rectangle && the parameter of the second rectangle
	float areay; //area of y
	float dx1,dx2; //length of x retangle
	float dy1,dy2; //length of y rectangle

	printf("Enter the postion of the first rectangle:\n");
	scanf("%f%f%f%f",&x1,&x2,&x3,&x4);	
	printf("Enter the postion of the second rectangle:\n");
	scanf("%f%f%f%f",&y1,&y2,&y3,&y4);	
	dx1 = x2-x1;
	dx2 = x4-x3;
	dy1 = y2-y1;
	dy2 = y4-y3;
	areax = dx1 * dx2;
	areay = dy1 * dy2;
	if (areax<0){
		areax = abs(areax);
	}	
	if (areay<0){
		areay = abs(areay);
	}
	
	if  (y1<x2 && y1<x4 || y2>x1 && y2>x3 || y3<x2 && y3<x4 || y4>x1 && y4>x2){
		printf ("It is intersect\n");
		printf ("area of x is %.2f\n",areax);
		printf("area of y is %.2f\n",areay);
		if (areax > areay){
			printf("The intersect is %f\n",areax - areay);
		}
		else{
			printf("The intersect is %.2f\n",areay - areax);
		}
	}
	else 
		printf("it is not intersect");
	
	
	return 0;
}
