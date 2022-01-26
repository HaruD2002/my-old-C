#include <stdio.h>
#include<math.h>  

 int main(){

	float a,b,c,x, S1,S2,D,sp,p,s; 
		
	printf("\n Enter A: " );
	scanf("%f",&a  );
	/*Create the first integer*/
	
	printf("\n Enter B: " );
	scanf("%f",&b);
	/*Create the second integer*/
	
	printf("\n Enter C: " );
	scanf("%f",&c );
	/*Call C*/
	
	printf("\n Enter X: " );
	scanf("%f",&x );
	/*Call X*/
	 
	S1 = a*x*x + b*x + c;    /*First Function*/
	D = b*b - 4*a*c;		/*Second Function*/
    if(D > 0) S2 = sqrt(b*b - 4*a*c); /*Second Function Rule*/
	else S2 = 0;
	
	printf("\n S1 = ax^2 +bx +c = %.2f, S2 = vb^2 - 4ac =%.2f\n", S1, S2);

	printf("\nEnter A: "); /*Call new A*/ 
	scanf("%f",&a);
	printf("\nEnter B: "); /*Call new B*/
	scanf("%f",&b);
	printf("\nEnter C: "); /*Call new C*/ 
	scanf("%f",&c);
	
    
	sp = (a+b+c)/2;/*sp fuctione*/ 
	p = (a+b+c); /*the part of the previous function */
	s = sqrt(sp*(sp-a)*(sp-b)*(sp-c)); /*Area using Henron Function*/
    
	if ((a < (b + c)) && (b < (a + c)) && (c < (a + b))) {printf("\n Perimeter = %f\n Area = %f\n",p,s); /*If A,B,C is triangle then run this*/
	}
	else {printf("\n A, B, C are not side of a triangle"); /*if not print the text*/
	}
    return 0;/*Return success*/ 
}
