// tinh dien tich phan dao nhau cua 2 hinh chu nhat
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
main(){
	float tlx,blx,trx,brx; // coordinate of the first rectangle && the parameter of the first rectangle
	float areax;// area of x
	float tly,bly,try1,bry;  // coordinate of the second rectangle && the parameter of the second rectangle
	float areay; //area of y
	float overlap;
	printf("Enter the postion of the first rectangle:\n");
	scanf("%f%f%f%f",&tlx,&blx,brx,&trx);	
	printf("Enter the postion of the second rectangle:\n");
	scanf("%f%f%f%f",&tly,&bly,&try1,&bry);	
		
	areax = (trx-tlx) * (tlx-blx);
	areay = (try1-tly) * (tly-bly);
	if (areax <0){
		areax = abs(areax);
	}
	if (areay <0){
		areay = abs(areay);
	}	
	if ( areax > areay){
		overlap = areax - areay;
	}
	else {
		overlap = areay - areax;
	}
	
	if (tlx > bly || tly > brx){
		printf("It is not overlap");
	}
	else if (tlx < bly || tly < brx){
		printf("It is not overlap");
	}
	else {
		printf("It is a overlap\n");
		printf("Area of the overlap =%f",overlap);
	}

	return 0;
}
