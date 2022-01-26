#include <stdio.h>
#include <conio.h>
#include <math.h>

void Cal(int x, int n, int *s, int *s1, float *s2); 

int main(){
	int x,n; 
	int s =1 , s1=1 ; 
	float s2=1;
	Cal(x,n,&s,&s1,&s2); 
	
}
	
void Cal(int x, int n, int *s, int *s1, float *s2) {
	
	printf ("Enter value x = \n");
	scanf ("%d", &x); 
	printf ("Enter value n= \n ");
	scanf ("%d",&n);
	
	
	int  S= 1,S1=1 ,f=-1,i;
    float m=1, gt=1;
    float S2=1;
    	
	 for (i=1; i<=n; i++){
        m = m*x;
        S = S+m;
        S1 = S1+f*m;
        f = f*(-1);
        gt = gt*i;
        S2 = S2+(1.0)*m/gt;
        
        
    }
	s = &S;
	s1 = &S1;
	s2 =&S2;
	
	printf("\n S=%d", *s);
    printf("\n S2=%d",*s1);
    printf("\n S3=%f",*s2);
	
	return s,s1,s2;
}




