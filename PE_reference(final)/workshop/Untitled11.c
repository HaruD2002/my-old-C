#include <stdio.h>

int primenumber(int n,int m);

int main (){
	int x,y;
	primenumber(x,y);
}

int primenumber(int n,int m){
	
	int i,j,c,temp;
	printf ("Enter two positive integer: ");
	scanf ("%d %d", &n, &m);
	
	if (n>m){
		temp=n;
		n=m;
		m=temp;
	}
	printf ("Prime number between %d and %d are: ",n,m);
for(i=n+1; i<m; ++i)
   {
      c=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            c=1;
            break;
         }
      }
      if(c==0)
         printf("%d ",i);
     }
 }
