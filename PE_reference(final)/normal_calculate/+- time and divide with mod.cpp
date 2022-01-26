#include <stdio.h>

main(){
	float x=0, y=0;

	
	scanf ("%f%f",&x,&y);
	printf("The sum of x = %.2f and y = %.2f is %.2f \n",x,y,x+y);
	printf ("The differentiate of x = %.2f and y = %.2f is %.2f \n",x,y,x-y);
	
	
	printf("The product of x = %.2f and y= %.2f = %.2f \n",x,y,x*y);
	
	if (y==0) {
				printf ("the value mustn't equal to zero'");
			}	
			else{
	printf ("The divide of x = %.2f and y= %.2f is %f and the remain is %d \n",x,y,x/y, int(x)%int(y));
}
}
