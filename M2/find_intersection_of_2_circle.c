#include <stdio.h>
#include <math.h>
// 6 so thuc 2 duong tron
// toa do tam x y
// ban kinh
//tim diem dao nhau giua 2 hinh tron
main(){
	 float x,y,x1,y1;
	 float r1,r2;
	 float d1,d2,df;	
	 
	 printf("Enter the position of the 1st circle: ");
	 scanf("%f%f",&x,&x1);
	 
	 printf("Enter the radius of the 1st circle: ");
	 scanf("%f",&r1);
	 
	 printf("Enter the position of the 2nd circle: ");
	 scanf("%f%f",&y,&y1);
	 
	 printf("Enter the position of the 2nd circle: ");
	 scanf("%f",&r2);
	 
	 d1 = (x-y)*(x-y);
	 d2 =(x1-y1)*(x1-y1);
	 
	 df = sqrt(d1+d2);
	 
	 if (r1+r2 >df){
	 	printf("It is intersect");
	 }
	 else if (r1-r2<df){
	 	printf("It is intersect");
	 }
	 else if (r1+r2 ==0){
	 	printf("It is concentric");
	 }
	 else{
	 	printf("It is not intersect");
	 }	 
return 0;	 
} 
