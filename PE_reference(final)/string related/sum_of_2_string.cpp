#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[1000];
	char b[1000];
	long val =0;
	long var =0;
	gets(a);
	gets(b);
	long x,y;
	char *p = a;
	while (*p) { 
	    if ( isdigit(*p) || ( (*p=='-'||*p=='+') && isdigit(*(p+1)) )) {
	        val = strtol(p, &p, 10);     
				 x = val;  
	    } else {
	        p++;
	    }
	}
	printf("\n");
	char *q = b;
	while (*q) {
	    if ( isdigit(*q) || ( (*q=='-'||*q=='+') && isdigit(*(q+1)) )) {
	        var = strtol(q, &q, 10); 
					y = var;
	    } else {
	        q++;
	    }
	}
	long sum;
	sum = x+y;
	printf("%ld",sum);
	return 0; 
} 
